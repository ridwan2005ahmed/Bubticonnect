# 💬 BUBT i-Connect – Virtual Campus Assistant

> 🤖 A smart terminal-based assistant system for students and faculty of **BUBT**  
> 🎓 Built with C++ | 💻 Voice-Powered | 🔍 Map Navigation | 📢 Notice & More

---

## 🧠 Overview

**BUBT i-Connect** is a C++ console application designed to improve student life on campus. It integrates an intelligent chatbot, room navigation map, notice board access, lost & found, complaint box, user management, and more. With text-to-speech responses and smart query matching, this project demonstrates practical and innovative use of C++ beyond basic algorithms and data structures.

---

## 🚀 Key Features

### 🗣️ Chatbot Assistant
- Answers common university-related questions
- Responds using **Windows Speech Synthesizer (Microsoft Zira)**
- Handles dynamic queries like:
  - 📅 “What’s the date today?”
  - ⏰ “What’s the current time?”
  - 🚨 Emergency first aid information
- Supports fuzzy matching for better accuracy
- Special commands to open:
  - 🔹 YouTube, Facebook, Google
  - 🔹 Notepad, Calculator, Codeforces

---

### 🗺️ Smart Map Search
- Find faculty rooms or departments
- Case-insensitive search from `data/map.txt`
- Retry option if no match is found

---

### 📢 Notice Board
- Displays university notices stored in `data/notice.txt`

### 🧳 Lost & Found
- Submit or view lost/found items using `data/lostinfo.txt` and `data/findinfo.txt`

### 📝 Complaint Box
- File and store complaints via `data/complaint.txt`

### 👤 User Management & Sessions
- User registration and login via `data/users.txt`
- Session management via `data/session.txt`

### 👨‍🎓 Student & Faculty Modules
- Separate modules for student and faculty features

### 🖥️ Client-Server Structure
- Includes `server.cpp` and `client.cpp` for networked features (if enabled)

---

## 🧑‍🤝‍🧑 Team Members

### 👨‍💻 Developers (Coders)
- **Ridwan Ahmed** – 20244103146
- **Mazidur Rahman** – 20244103158
- **Shajidul Islam** – 20244103152

### 🧑‍🎓 Non-Coders (Data Collectors)
- **Snigdha Mim** – 20244103122
- **Rihab** – 20244103141
- **Mahir Shahriar Galib** – 20244103145

---

## 📁 Project Structure

```
📦 Bubticonnect-v2
├── .vscode/                     # Editor settings (optional)
├── data/                        # Static files used by modules
│   ├── chatdata.txt             # Chatbot questions and answers
│   ├── complaint.txt            # Complaint submissions
│   ├── findinfo.txt             # Found item reports
│   ├── lostinfo.txt             # Lost item reports
│   ├── notice.txt               # University notice content
│   ├── session.txt              # Session management
│   └── users.txt                # User login/registration info
├── src/                         # Core system source code
│   ├── adminmain.cpp            # Admin module
│   ├── chatbot.cpp              # Chatbot logic
│   ├── client.cpp               # Client-side networking
│   ├── complaint.cpp            # Complaint module
│   ├── facultymain.cpp          # Faculty module
│   ├── function.h               # Function declarations
│   ├── lostAndFound.cpp         # Lost & Found handling
│   ├── notice.cpp               # Notice system
│   ├── server.cpp               # Server-side networking
│   ├── smartmap.cpp             # Smart room search
│   └── studentmain.cpp          # Student module
├── main.cpp                     # Main entry point
├── myapp.exe                    # Windows executable (ignore this)
├── README.md                    # 📘 Project documentation
└── tempCodeRunnerFile.cpp       # Temporary file (delete this)
```

---

## 🛠️ How to Compile & Run

### 🧾 Prerequisites:
- Windows OS (Required for text-to-speech)
- C++ compiler (e.g. g++)

### 🔧 Compile
```bash
g++ src/*.cpp main.cpp -o myapp.exe
```

### ▶️ Run
```bash
./myapp.exe
```

> ❗ Ensure the `data/` folder is present and properly populated with all `.txt` files.

---

## ✨ Future Enhancements
- [ ] GUI Version (using Qt or C++)
- [ ] Online Notice Sync via API
- [ ] Save chatbot learning history
- [ ] MySQL or SQLite database support

---

## 🏫 Project Info

🎓 **Project Name**: BUBT i-Connect  
🏢 **Institution**: Bangladesh University of Business & Technology (BUBT)  
📅 **Semester**: Spring 2025  
📘 **Course**: Software Development Project  

---

## 🧑‍💻 Developed With ❤️ in C++

> “Technology should solve real problems — that’s what we aimed to do with **BUBT i-Connect**.”