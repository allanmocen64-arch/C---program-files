import { Router, Response } from "express";
import { v4 as uuidv4 } from "uuid";
import bcryptjs from "bcryptjs";
import jwt from "jsonwebtoken";
import { db } from "../models/db";
import { AuthRequest } from "../middleware/auth";

const router = Router();

// Register
router.post("/register", async (req: AuthRequest, res: Response) => {
  try {
    const { email, password } = req.body;

    if (!email || !password) {
      return res
        .status(400)
        .json({ error: "Email and password required" });
    }

    if (db.getUserByEmail(email)) {
      return res.status(400).json({ error: "User already exists" });
    }

    const hashedPassword = await bcryptjs.hash(password, 10);
    const user = {
      id: uuidv4(),
      email,
      password: hashedPassword,
      createdAt: new Date(),
    };

    db.createUser(user);

    const token = jwt.sign(
      { userId: user.id },
      process.env.JWT_SECRET || "your_secret"
    );

    res.status(201).json({ user: { id: user.id, email }, token });
  } catch (error) {
    res.status(500).json({ error: "Registration failed" });
  }
});

// Login
router.post("/login", async (req: AuthRequest, res: Response) => {
  try {
    const { email, password } = req.body;

    if (!email || !password) {
      return res
        .status(400)
        .json({ error: "Email and password required" });
    }

    const user = db.getUserByEmail(email);
    if (!user) {
      return res.status(401).json({ error: "Invalid credentials" });
    }

    const passwordMatch = await bcryptjs.compare(password, user.password);
    if (!passwordMatch) {
      return res.status(401).json({ error: "Invalid credentials" });
    }

    const token = jwt.sign(
      { userId: user.id },
      process.env.JWT_SECRET || "your_secret"
    );

    res.json({ user: { id: user.id, email }, token });
  } catch (error) {
    res.status(500).json({ error: "Login failed" });
  }
});

export default router;
