import { User, Task } from "./types";

// In-memory storage (MVP only - upgrade to PostgreSQL/MongoDB later)
const users: Map<string, User> = new Map();
const tasks: Map<string, Task> = new Map();

export const db = {
  users,
  tasks,

  // User operations
  createUser: (user: User) => {
    users.set(user.id, user);
    return user;
  },

  getUserById: (id: string) => users.get(id),

  getUserByEmail: (email: string) => {
    return Array.from(users.values()).find((u) => u.email === email);
  },

  // Task operations
  createTask: (task: Task) => {
    tasks.set(task.id, task);
    return task;
  },

  getTasksByUserId: (userId: string) => {
    return Array.from(tasks.values()).filter((t) => t.userId === userId);
  },

  getTaskById: (id: string) => tasks.get(id),

  updateTask: (id: string, updates: Partial<Task>) => {
    const task = tasks.get(id);
    if (!task) return null;
    const updated = { ...task, ...updates, updatedAt: new Date() };
    tasks.set(id, updated);
    return updated;
  },

  deleteTask: (id: string) => {
    return tasks.delete(id);
  },
};
