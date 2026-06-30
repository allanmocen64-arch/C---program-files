## 🚀 Getting Started with TaskFlow

### Step 1: Install Node.js
📥 **Download & install Node.js 18+ from** [https://nodejs.org/](https://nodejs.org/)

After installation, verify:
```bash
node --version
npm --version
```

---

### Step 2: Set Up Backend (Express API)

1. Open terminal in the `server/` folder
2. Install dependencies:
   ```bash
   npm install
   ```
3. Start the development server:
   ```bash
   npm run dev
   ```
4. You should see: **✅ Server running at http://localhost:5000**

Leave this running in a separate terminal!

---

### Step 3: Set Up Frontend (React Native)

1. Open a **new terminal** in the `client/` folder
2. Install dependencies:
   ```bash
   npm install
   ```
3. Start the Expo dev server:
   ```bash
   npm start
   ```

---

### Step 4: Run the App

When `npm start` completes, you'll see:
```
   › Press a │ open Android
   › Press i │ open iOS simulator  
   › Press w │ open web version
   › Press j │ open Expo Go
```

Choose one:
- **a** = Android emulator (requires Android Studio)
- **i** = iOS simulator (Mac only)
- **w** = Web browser (fastest to test)
- **j** = Expo Go app (download from App Store/Play Store, then scan QR code)

---

### Step 5: Test the App

✅ **Register**: Create a new account  
✅ **Login**: Use your credentials  
✅ **Create Tasks**: Tap the **+** button  
✅ **Manage Tasks**: Complete, delete, edit properties  

---

## 🎯 Key Features

| Feature | Status | Notes |
|---------|--------|-------|
| User Auth (Register/Login) | ✅ | JWT-based, passwords hashed |
| Create Tasks | ✅ | Title, description, due date, priority |
| View Tasks | ✅ | List with categories, priority badges |
| Mark Complete | ✅ | Visual checkmark & strikethrough |
| Delete Tasks | ✅ | Confirm before delete |
| Priority Levels | ✅ | Low (Green), Medium (Amber), High (Red) |
| Categories | ✅ | Work, School, Personal, Other |
| Due Dates | ✅ | Date picker, overdue indicator |
| Offline Ready | 🟡 | AsyncStorage setup, ready to sync |
| Search | 🟡 | Ready to implement |
| Notifications | 🟡 | Backend hooks ready |

---

## 🔗 API Endpoints

All endpoints are prefixed with `/api`

| Method | Endpoint | Auth | Returns |
|--------|----------|------|---------|
| POST | `/auth/register` | ❌ | `{ user, token }` |
| POST | `/auth/login` | ❌ | `{ user, token }` |
| GET | `/tasks` | ✅ | `Task[]` |
| POST | `/tasks` | ✅ | `Task` |
| PUT | `/tasks/:id` | ✅ | `Task` |
| DELETE | `/tasks/:id` | ✅ | `{ success: true }` |

---

## 🛠️ Troubleshooting

### Port 5000 already in use?
```bash
# Kill the process using port 5000
# Windows: Use Task Manager or:
netstat -ano | findstr :5000
taskkill /PID <PID> /F

# Mac/Linux:
lsof -i :5000
kill -9 <PID>
```

### Module not found?
```bash
# Delete node_modules and reinstall
rm -rf node_modules package-lock.json
npm install
```

### Expo app won't connect?
- Make sure backend is running (`npm run dev` in `server/`)
- Check `.env` files point to correct API URL
- Use web version first to debug: press **w**

---

## 📚 File Structure Quick Reference

```
TaskFlow/
  ├── server/
  │   ├── src/
  │   │   ├── index.ts (Server entry, setup Express)
  │   │   ├── routes/auth.ts (Login/Register)
  │   │   ├── routes/tasks.ts (CRUD endpoints)
  │   │   ├── models/db.ts (In-memory storage)
  │   │   └── middleware/auth.ts (JWT validation)
  │   └── package.json
  │
  ├── client/
  │   ├── src/
  │   │   ├── screens/
  │   │   │   ├── LoginScreen.tsx
  │   │   │   ├── RegisterScreen.tsx
  │   │   │   ├── DashboardScreen.tsx
  │   │   │   └── AddTaskScreen.tsx
  │   │   ├── components/TaskItem.tsx
  │   │   ├── services/api.ts (Axios client)
  │   │   ├── context/AuthContext.tsx (Auth state)
  │   │   └── hooks/useAuth.ts
  │   ├── App.tsx (Navigation setup)
  │   └── package.json
  │
  └── README.md
```

---

## 🎓 Next Steps

1. ✅ **Run the app** and test all features
2. 🔲 **Add persistence**: Replace in-memory DB with PostgreSQL/MongoDB
3. 🔲 **Add notifications**: Integrate Firebase Cloud Messaging
4. 🔲 **Deploy**: Use EAS Build (Expo) for production builds
5. 🔲 **Add features**: Search, offline sync, recurring tasks, etc.

---

**Happy tasking! 🚀**
