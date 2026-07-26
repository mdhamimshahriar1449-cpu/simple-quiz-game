👤 Author
MD HAMIM SHAHRIAR

Roll: 0322410105101042

Batch: 20

Department: Computer Science & Engineering

University: Pundra University of Science & Technology

Step-by-Step Setup Guide to Run Program:
Method 1: Using Terminal or Command Prompt (GCC)

1.Open Terminal / Command Prompt:

Step 1: Open Command Prompt / PowerShell (on Windows) or Terminal (on Linux/macOS).

2.Navigate to Your Project Folder:

Step 2.Use the cd command to enter the directory where your main.c file is saved:

Bash:

cd path/to/your/project-folder

3.Compile the Code:

Step 3.Run the compiler to build the program:

Windows:

DOS 

gcc main.c -o quiz_game.exe

Linux / macOS :

Bash:

gcc main.c -o quiz_game

4.Run the Executable:

Step 4.Execute the compiled program:

Windows:

DOS

.\quiz_game.exe

Linux / macOS:

Bash

./quiz_game

🎮 How to Play
1.Launch the executable file in your terminal.

2.Input your Candidate Name and Roll Number.

3.Press Enter to begin the quiz.

4.Read each question and select an option by typing A, B, C, or D (or lowercase a, b, c, d).

5.Review your final summary screen containing correct vs. incorrect totals, percentage, and performance appraisal.

# Simple Quiz Game in C

A lightweight, terminal-based interactive multiple-choice quiz game written in C. Developed for **Software Development Lab I** at Pundra University of Science & Technology.

---

## 📌 Project Overview
Traditional study methods can often feel dry and lack engagement. The **Simple Quiz Game** is designed to provide students and learners with a fast, interactive way to test their C programming knowledge directly inside the terminal. The program prompts for student credentials, evaluates answers sequentially, tracks accurate performance metrics, and generates a comprehensive evaluation summary upon completion.

---

## ✨ Features
- **Candidate Identification:** Prompts for player Name and Roll Number before beginning the test.
- **10 Multiple-Choice Questions:** Expanded question capacity covering key C programming concepts.
- **Case-Insensitive Input:** Accepts both lowercase (`a`, `b`, `c`, `d`) and uppercase (`A`, `B`, `C`, `D`) inputs seamlessly.
- **Real-Time Feedback:** Displays instant correctness verification after each question.
- **Detailed Score Breakdown:** Displays total questions, correct answers count, and incorrect answers count.
- **Automated Performance Rating:** Generates personalized appraisal ratings based on the overall percentage score.

---

## 🛠️ Requirements & Prerequisites
To compile and run this program, ensure you have a standard C compiler installed on your system:
- **GCC Compiler** (MinGW for Windows, GNU Compiler Collection for Linux/macOS)
- **Git** (optional, for repository management)

---

## 🚀 How to Build & Run

### 1. Clone the Repository
```bash
git clone [https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git](https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git)
cd simple-quiz-game

Project Structure
simple-quiz-game/
├── main.c           # Complete source code in C
├── README.md        # Project documentation and setup guide
└── .gitignore       # Ignores compiled binary executables
Project Structure
