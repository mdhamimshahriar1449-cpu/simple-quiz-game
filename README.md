👤 Member 1 Information
•	Name: MD HAMIM SHAHRIAR
•	Roll Number: 0322410105101042
•	Batch: 20
•	Department: Computer Science & Engineering
•	University: Pundra University of Science & Technology
•	GitHub: mdhamimshahriar1449-cpu

# Simple Quiz Game in C

A lightweight, multi-level, terminal-based interactive multiple-choice quiz game written in C. Developed for **Software Development Lab I** at Pundra University of Science & Technology.

1.	📌 Project Overview
Traditional study methods can often feel dry and lack engagement, making it difficult for students to test their knowledge effectively. The **Simple Quiz Game** is designed to provide learners with a fast, interactive way to test their C programming knowledge directly inside the console across multiple difficulty tiers. The program prompts for student credentials, measures response time in real-time using system clocks, evaluates answers sequentially, and generates a comprehensive performance report upon completion.

3. ✨ Features
i) Candidate Identification:** Captures and displays candidate Name and Roll Number on the final score report.
ii) 3 Difficulty Levels:** Features 15 questions categorized into **Level 1 (Easy)**, **Level 2 (Medium)**, and **Level 3 (Hard)**.
iii) Per-Question Response Timer:** Uses `<time.h>` to measure and display the exact duration (in seconds) taken to answer each question.
Iv) Case-Insensitive Input:** Accepts both lowercase (`a`, `b`, `c`, `d`) and uppercase (`A`, `B`, `C`, `D`) inputs seamlessly.
v) Real-Time Feedback:** Displays instant correctness verification alongside time taken right after answering each question.
vi) Detailed Score Breakdown:** Reports total correct answers, incorrect answers, total time taken, average time per question, percentage accuracy, and performance appraisal.

5.  🛠️ Requirements & Prerequisites

To compile and run this project, ensure you have a C compiler installed on your system:

i) GCC Compiler** (MinGW for Windows, GNU Compiler Collection for Linux/macOS)

ii) Git** (for version control and submission)

7. 🚀 Build & Run game  Instructions : 

1. Clone the Repository :- git clone [https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git] (https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git)

Method 1: Using Terminal or Command Prompt (GCC)

Step 1: Open Command Prompt / PowerShell (on Windows) or Terminal (on Linux/macOS).

Step 2: Navigate to Your Project Folder. Use the cd command to enter the directory where your main.c file is saved : 

Type This code: cd path/to/your/project-folder 

(Note : Project folder create in Dextop before main.c file save it. Then work properly Methode 1 and 3 are same)

Step 3 :  Compile the Code Run the compiler to build the program :

i)	Windows type : gcc main.c -o quiz_game.exe

or

ii)	Linux / macOS type : gcc main.c -o quiz_game


Step 4 : Run the Executable the compiled program:

i)	Windows type : .\quiz_game.exe

or

ii)	Linux / macOS type : ./quiz_game


Method 2: Using VS Code (Visual Studio Code)
1.	Open VS Code and open the folder containing main.c.
2.	Make sure you have the C/C++ extension by Microsoft installed.
3.	Open main.c in the editor.
4.	Click the Play / Run button (▶) in the top-right corner of VS Code, or press Ctrl + F5 (Windows) / Cmd + F5 (macOS).
5.	The terminal panel at the bottom will open automatically and run the program.

Method 3: Using Code::Blocks 
1.	A console window will pop up running your quiz game use Method 1.

🎮 Usage Guidance
1.	Start the Application: Run the compiled binary executable in your terminal window.
2.	Enter Candidate Information: Type your Name and Roll Number when prompted.
3.	Begin Quiz: Press Enter to proceed to Level 1: Easy.
4.	Answer Questions:
o	Read the question and four options (A, B, C, D).
o	Input your choice (A, B, C, or D — upper or lowercase) and press Enter.

6.	Review Instant Feedback: See if your answer was correct and view the exact seconds taken to submit that response.
7.	Complete All Levels: Progress sequentially through Level 1 (5 questions), Level 2 (5 questions), and Level 3 (5 questions).
8.	View Summary Report: Analyze your final evaluation metrics including score, accuracy percentage, time taken, and overall rating.

📂 Project Structure :
simple-quiz-game/
├── main.c           # Complete C source code (15 questions, 3 levels, timer logic)
├── README.md        # Comprehensive project documentation
└── .gitignore       # Excludes compiled binary executables (.exe, out)
