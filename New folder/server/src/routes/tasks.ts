import { Router, Response } from "express";
import { v4 as uuidv4 } from "uuid";
import { db } from "../models/db";
import { AuthRequest, authMiddleware } from "../middleware/auth";
import { Task } from "../models/types";

const router = Router();

// Middleware: ensure auth
router.use(authMiddleware);

// GET all tasks for user
router.get("/", (req: AuthRequest, res: Response) => {
  try {
    const tasks = db.getTasksByUserId(req.userId!);
    res.json(tasks);
  } catch (error) {
    res.status(500).json({ error: "Failed to fetch tasks" });
  }
});

// GET single task
router.get("/:id", (req: AuthRequest, res: Response) => {
  try {
    const task = db.getTaskById(req.params.id);
    if (!task || task.userId !== req.userId) {
      return res.status(404).json({ error: "Task not found" });
    }
    res.json(task);
  } catch (error) {
    res.status(500).json({ error: "Failed to fetch task" });
  }
});

// POST create task
router.post("/", (req: AuthRequest, res: Response) => {
  try {
    const { title, description, dueDate, priority, category } = req.body;

    if (!title) {
      return res.status(400).json({ error: "Title required" });
    }

    const task: Task = {
      id: uuidv4(),
      userId: req.userId!,
      title,
      description: description || undefined,
      completed: false,
      dueDate: dueDate ? new Date(dueDate) : undefined,
      priority: priority || "medium",
      category: category || "personal",
      createdAt: new Date(),
      updatedAt: new Date(),
    };

    db.createTask(task);
    res.status(201).json(task);
  } catch (error) {
    res.status(500).json({ error: "Failed to create task" });
  }
});

// PUT update task
router.put("/:id", (req: AuthRequest, res: Response) => {
  try {
    const task = db.getTaskById(req.params.id);
    if (!task || task.userId !== req.userId) {
      return res.status(404).json({ error: "Task not found" });
    }

    const { title, description, completed, dueDate, priority, category } =
      req.body;
    const updates: Partial<Task> = {};

    if (title !== undefined) updates.title = title;
    if (description !== undefined) updates.description = description;
    if (completed !== undefined) updates.completed = completed;
    if (dueDate !== undefined)
      updates.dueDate = dueDate ? new Date(dueDate) : undefined;
    if (priority !== undefined) updates.priority = priority;
    if (category !== undefined) updates.category = category;

    const updated = db.updateTask(req.params.id, updates);
    res.json(updated);
  } catch (error) {
    res.status(500).json({ error: "Failed to update task" });
  }
});

// DELETE task
router.delete("/:id", (req: AuthRequest, res: Response) => {
  try {
    const task = db.getTaskById(req.params.id);
    if (!task || task.userId !== req.userId) {
      return res.status(404).json({ error: "Task not found" });
    }

    db.deleteTask(req.params.id);
    res.json({ success: true });
  } catch (error) {
    res.status(500).json({ error: "Failed to delete task" });
  }
});

export default router;
