👤 Member 1 Information

•	Name: MD HAMIM SHAHRIAR

•	Roll Number: 0322410105101042

•	Batch: 20

•	Department: Computer Science & Engineering

•	University: Pundra University of Science & Technology

•	GitHub: mdhamimshahriar1449-cpu

#Simple Quiz Game in C

A lightweight, multi-level, terminal-based interactive multiple-choice quiz game written in C. Developed for Software Development Lab I at Pundra University of Science & Technology.

1.	Project Overview
Traditional study methods can often feel dry and lack engagement, making it difficult for students to test their knowledge effectively. The Simple Quiz Game is designed to provide learners with a fast, interactive way to test their C programming, OS, DBMS, and Data Structures knowledge directly inside the terminal across selectable difficulty tiers. The program prompts for candidate credentials, allows pre-game level selection, measures response times in real-time using system clocks (<time.h>), evaluates answers sequentially and generates a comprehensive performance report upon completion.

2. ✨ Features

1. Candidate Identification: Captures candidate Name and Roll Number at launch and displays them on the final evaluation report.

2. Pre-Game Level Selection Menu: Offers flexibility to play a single difficulty tier (Level 1, Level 2, or Level 3) or play through all 15 questions sequentially.

3. 15 Categorized Questions across 3 Difficulty Levels: Covers core Computer Science topics including Database Systems, Algorithms, Structured Programming, and Operating Systems.

4. Per-Question Response Timer: Employs <time.h> to calculate and display exact response duration in both seconds and minutes after every submission.

5. Case-Insensitive Input: Seamlessly accepts both lowercase (a, b, c, d) and uppercase (A, B, C, D) inputs using toupper().

6. Real-Time Feedback: Instantly verifies correctness and reveals correct answers alongside time metrics immediately after each question.

7. Detailed Score Report & Performance Appraisal: Summarizes total correct/incorrect answers, overall time taken, average time per question, accuracy percentage, and an automated performance evaluation grade.

3.  🛠️ Requirements & Prerequisites
   
1. To compile and execute this project, ensure you have a standard C compiler installed:

2. GCC Compiler (MinGW for Windows, or standard GNU Compiler Collection on Linux/macOS)

3. Git (for repository cloning and version management)

4. 🚀 Build & Run Instructions

Clone the Repository : git clone https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git
cd simple-quiz-game

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

step 1: Open Code::Blocks and create a new Console Application project or open main.c directly.

step 2: Build and run the project by pressing F9 or clicking Build and Run from the top toolbar.

Method 4: Using Dev-C++

step 1: Launch Dev-C++.

step 2: Go to File ➔ Open (Ctrl + O) and select main.c.

step 3: Click Execute ➔ Compile & Run or press F11.

step 4: Interact with the application in the external console window that appears.

Step 5: Play in Console Window : A black terminal/console window will pop up running your game. You can now enter your Name, Roll Number, and answer the 15 quiz questions across all 3 levels.

5.🎮 Usage Guidance

1. Launch the Executable: Run the binary in your console environment.

2. Enter Candidate Details: Input your Name and Roll Number when prompted.

3. Select Game Mode:

1 — Level 1 (Easy Only — 5 Questions)

2 — Level 2 (Medium Only — 5 Questions)

3 — Level 3 (Hard Only — 5 Questions)

4 — All Play Option (All 15 Questions across 3 Levels)

4. Begin Quiz: Press Enter to start answering questions.

5. Answer Questions:

6. Read the displayed question and options (A, B, C, D).

7. Type your answer choice (case-insensitive) and press Enter.

8. Review Instant Feedback: Check whether your answer was correct, view the exact answer if incorrect, and observe your time taken.

9. Analyze Report: Review your comprehensive accuracy percentage, total/average time, and performance rating at the end of the game.

6. 📂 Project Structure
   
simple-quiz-game/
├── main.c           # Complete C source code (15 questions, interactive menu, timer)
├── README.md        # Detailed project documentation
└── .gitignore       # Excludes built executable binaries (.exe, .out, object files)
