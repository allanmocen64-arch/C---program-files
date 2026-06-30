# TaskFlow - Mobile Task Management App

A full-stack mobile app built with **React Native (Expo)** and **Node.js/Express (TypeScript)** for task management with offline sync support.

## 📁 Project Structure
```
taskflow/
├── server/                # Express REST API backend (TypeScript)
│   ├── src/
│   │   ├── index.ts      # Express server entry point
│   │   ├── models/       # TypeScript types and in-memory DB
│   │   ├── routes/       # Auth & Tasks API endpoints
│   │   └── middleware/   # Auth middleware (JWT)
│   ├── package.json
│   ├── tsconfig.json
│   └── .env              # Server configuration
│
└── client/               # React Native (Expo) mobile app
    ├── src/
    │   ├── screens/      # Login, Register, Dashboard, AddTask
    │   ├── components/   # TaskItem, etc.
    │   ├── services/     # API client with axios
    │   ├── context/      # Auth context (state management)
    │   ├── hooks/        # useAuth hook
    │   └── types.ts      # Shared TypeScript types
    ├── App.tsx           # Main navigation setup
    ├── package.json
    ├── app.json          # Expo config
    ├── tsconfig.json
    └── .env              # Client configuration
```

## 🚀 Quick Start

### Prerequisites
- **Node.js 18+** ([Download](https://nodejs.org/))
- **npm** (comes with Node.js)
- **Expo CLI** (optional, for better dev experience)

### Backend Setup
```bash
cd server
npm install
npm run dev
```
✅ Server will run on `http://localhost:5000`
📚 API test: `http://localhost:5000/api/health`

### Frontend Setup
```bash
cd client
npm install
npm start
```
✅ Choose your platform:
- **`a`** = Android emulator
- **`i`** = iOS simulator
- **`w`** = Web browser
- **`j`** = Expo Go app (recommended for quick testing)

## 🎯 Features

### ✅ Implemented (MVP)
- Register / Login (JWT auth)
- Create, Read, Update, Delete tasks
- Mark tasks as complete (with visual feedback)
- Due dates & priority levels (Low/Medium/High)
- Task categories (Work, School, Personal, Other)
- Task descriptions
- Responsive mobile UI
- AsyncStorage for offline persistence (ready-to-integrate)

### 🔲 Planned (Phase 2+)
- Push notifications
- Recurring tasks
- Search & filtering
- Drag & drop reordering
- Subtasks
- Progress tracking & stats
- Dark mode
- Cloud sync (Firebase/Supabase)
- Pomodoro timer
- Offline-first sync

## 🔧 API Endpoints

### Auth
- `POST /api/auth/register` - Register new user
- `POST /api/auth/login` - Login user

### Tasks (Requires Auth Header: `Authorization: Bearer <token>`)
- `GET /api/tasks` - Get all user tasks
- `GET /api/tasks/:id` - Get single task
- `POST /api/tasks` - Create task
- `PUT /api/tasks/:id` - Update task
- `DELETE /api/tasks/:id` - Delete task

## 🛠️ Tech Stack
- **Backend**: Express.js, TypeScript, bcryptjs, JWT
- **Frontend**: React Native, Expo, Axios, React Navigation
- **State**: Context API + AsyncStorage
- **Storage**: In-memory (MVP) → PostgreSQL/MongoDB (production)

## 📝 Example Request
```bash
# Register
curl -X POST http://localhost:5000/api/auth/register \
  -H "Content-Type: application/json" \
  -d '{"email":"user@example.com","password":"securepass"}'

# Login
curl -X POST http://localhost:5000/api/auth/login \
  -H "Content-Type: application/json" \
  -d '{"email":"user@example.com","password":"securepass"}'

# Create Task (with token)
curl -X POST http://localhost:5000/api/tasks \
  -H "Authorization: Bearer YOUR_TOKEN" \
  -H "Content-Type: application/json" \
  -d '{"title":"Buy groceries","priority":"high","category":"personal"}'
```

## 🌱 Next Steps
1. **Install Node.js** if not already installed
2. **Run `npm install`** in both `server/` and `client/`
3. **Start backend**: `cd server && npm run dev`
4. **Start frontend**: `cd client && npm start`
5. **Test**: Register, login, and create tasks!

## 📚 Learn More
- [Expo Documentation](https://docs.expo.dev/)
- [React Navigation](https://reactnavigation.org/)
- [Express.js Guide](https://expressjs.com/)
- [TypeScript Handbook](https://www.typescriptlang.org/docs/)
