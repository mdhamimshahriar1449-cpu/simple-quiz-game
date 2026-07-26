👤 Author
MD HAMIM SHAHRIAR

Roll: 0322410105101042

Batch: 20

Department: Computer Science & Engineering

University: Pundra University of Science & Technology

Step-by-Step Setup Guide to Run Program:
Method 1: Using Terminal or Command Prompt (GCC)

1. Open Terminal / Command Prompt:

Step 1: Open Command Prompt / PowerShell (on Windows) or Terminal (on Linux/macOS).

2. Navigate to Your Project Folder:

Step 2. Use the cd command to enter the directory where your main.c file is saved:

TYPE THIS CODE : cd path/to/your/project-folder

3. NEXT Compile the Code:

Step 3. Run the compiler to build the program:

Windows TYPE : gcc main.c -o quiz_game.exe

Linux / macOS TYPE : gcc main.c -o quiz_game

4.NEXT Run the Executable:

Step 4. Execute the compiled program:

Windows TYPE : .\quiz_game.exe

Linux / macOS TYPE: ./quiz_game

🎮 How to Play: 

1.Launch the executable file in your terminal.

2.Enter your Candidate Name and Roll Number.

3.Press Enter to start Level 1 (Easy).

4.For each question, type A, B, C, or D (or lowercase equivalents) and press Enter.

5.Observe instant correctness feedback alongside your response time in seconds.

6.Progress through all 3 levels (15 total questions) to view your final summary report.

# Simple Quiz Game in C

A lightweight, terminal-based interactive multiple-choice quiz game written in C. Developed for **Software Development Lab I** at Pundra University of Science & Technology.

---

## 📌 Project Overview
Traditional study methods can often feel dry and lack engagement. The **Simple Quiz Game** is designed to provide students and learners with a fast, interactive way to test their C programming knowledge directly inside the terminal across multiple difficulty levels. The program prompts for candidate credentials, tracks answering speed in real-time, evaluates answers sequentially, and generates a comprehensive performance summary upon completion.

---

## ✨ Features
- **Candidate Identification:** Prompts for player Name and Roll Number before starting the test.
- **3 Difficulty Levels:** Automatically categorizes questions into **Level 1 (Easy)**, **Level 2 (Medium)**, and **Level 3 (Hard)**.
- **15 Questions Capacity:** 5 distinct multiple-choice questions for each difficulty tier.
- **Per-Question Timer:** Tracks and displays the exact duration (in seconds) taken to answer each question.
- **Case-Insensitive Input:** Accepts both lowercase (`a`, `b`, `c`, `d`) and uppercase (`A`, `B`, `C`, `D`) inputs seamlessly.
- **Detailed Final Metrics:** Reports correct/incorrect answer counts, total time taken, average time per question, percentage score, and performance appraisal.

---

## 🛠️ Requirements & Prerequisites
To compile and run this program, ensure you have a standard C compiler installed on your system:
- **GCC Compiler** (MinGW for Windows, GNU Compiler Collection for Linux/macOS)
- **Git** (optional, for version control)

---

## 🚀 How to Build & Run

### 1. Clone the Repository
```bash
git clone [https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git](https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git)
cd simple-quiz-game

simple-quiz-game/
├── main.c           # Complete source code in C (15 questions, 3 levels, timer)
├── README.md        # Project documentation and setup guide
└── .gitignore       # Ignores compiled binary executables
