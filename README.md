# Simple Quiz Game in C

A lightweight, multi-level, terminal-based multiple-choice quiz game
written in the C programming language. This project was developed for
**Software Development Lab I** at **Pundra University of Science &
Technology**.

------------------------------------------------------------------------

👤 Member 1 Information

  Name             : MD HAMIM SHAHRIAR
  
  Roll Number      : 0322410105101042
  
  Batch            : 20
  
  Department       : Computer Science & Engineering
  
  University       ; Pundra University of Science & Technology
  
  GitHub Username   : mdhamimshahriar1449-cpu
  
👤 Member 2 Information

  Name             : Tania  Khatun
  
  Roll Number      : 03225105101028
  
  Batch            : 20
  
  Department       : Computer Science & Engineering
  
  University       ; Pundra University of Science & Technology
  
  GitHub Username   : msttaniakhatun327-eng

1. 📌 Project Overview

Traditional study methods can sometimes feel unengaging and provide
limited opportunities for students to test their knowledge. The **Simple
Quiz Game** provides learners with an interactive way to assess their
understanding of core Computer Science topics, including C programming,
Operating Systems, Database Management Systems, and Data Structures.

The application runs in a terminal and begins by collecting the
candidate's name and roll number. Users can then choose one of three
difficulty levels---Easy, Medium, or Hard---or attempt all 15 questions.
The program checks each answer, provides immediate feedback, and
measures the time taken to answer each question using the C `time.h`
library.

After the quiz, the application displays a performance report containing
the number of correct and incorrect answers, accuracy percentage, total
quiz time, average response time, and an automatic performance message.

2. ✨ Features

1.  Candidate Identification: Collects the candidate's name and roll
    number and displays them in the final report.
    
3.  Pre-Game Level Selection: Allows users to play one difficulty
    level or all 15 questions.
    
5.  Three Difficulty Levels: Includes 5 Easy, 5 Medium, and 5 Hard
    questions.
    
7.  Computer Science Questions: Covers topics such as C programming,
    algorithms, Database Management Systems, and Operating Systems.
    
9.  Per-Question Response Timer: Uses `time.h`, `time()`, and
    `difftime()` to calculate response time in seconds and minutes.
    
11.  Case-Insensitive Input: Accepts both uppercase and lowercase
    answer choices using `toupper()`.

13.  Immediate Feedback: Checks each answer and displays the correct
    answer when the submitted answer is incorrect.

15.  Performance Report: Displays total questions, correct and
    incorrect answers, and accuracy percentage.

17.  Time Analysis: Calculates total quiz duration and average
    response time per question.

19. Automatic Performance Evaluation: Displays a performance message
    based on the final accuracy percentage.

3. 🛠️ Requirements & Prerequisites

To compile and run the project, you need:

-   A C compiler, such as GCC (MinGW on Windows or GCC on Linux/macOS).
  
-   A terminal or command prompt.
  
-   Git (optional, for cloning and version control).
  
-   An editor or IDE, such as Visual Studio Code, Code::Blocks, or
    Dev-C++.

4. 🚀 Build & Run Instructions

### Clone the Repository

Open a terminal and run:


git clone https://github.com/mdhamimshahriar1449-cpu/simple-quiz-game.git
cd simple-quiz-game


If you have already downloaded the project, open a terminal in the
folder containing `main.c`.

Method 1: Using GCC in a Terminal or Command Prompt

Step 1: Open a terminal.

-   Windows: Open Command Prompt or PowerShell.
  
-   Linux/macOS: Open Terminal.

Step 2: Navigate to the project folder.

cd path/to/simple-quiz-game


Replace `path/to/simple-quiz-game` with the actual location of your
project folder.

Step 3: Compile the source code.

Windows:

gcc main.c -o quiz_game.exe


Linux/macOS:


gcc main.c -o quiz_game


Step 4: Run the program.

Windows:

powershell

.\quiz_game.exe

Linux/macOS:

./quiz_game

Method 2: Using Visual Studio Code

1.  Open Visual Studio Code.
  
2.  Open the folder containing `main.c`.
  
3.  Install the Microsoft C/C++ extension if it is not already
    installed.
    
4.  Make sure a C compiler such as GCC is installed and available in the
    system PATH.
    
5.  Open the integrated terminal (**Terminal → New Terminal**).

10.  Compile and run using the GCC commands shown in Method 1.

Method 3: Using Code::Blocks

1.  Open Code::Blocks.
  
2.  Create a Console Application project or open the source file in a
    suitable project.
    
3.  Add `main.c` to the project if necessary.
   
4.  Select **Build and Run** or press **F9**.

Method 4: Using Dev-C++

1.  Launch Dev-C++.
 
2.  Select **File → Open** and choose `main.c`.
 
3.  Select **Execute → Compile & Run** or press **F11**.

4.  The program will open in a console window.

5. 🎮 Usage Guidance

1.  Run the compiled program in a terminal or console window.

2.  Enter your candidate name.

3.  Enter your roll number.

4.  Select a game mode:

      Choice   Mode                                    Number of Questions
    
      -------- ------------------------------------- ---------------------
      1        Level 1 --- Easy                                          5
    
      2        Level 2 --- Medium                                        5
    
      3        Level 3 --- Hard                                          5
    
      4        All Play --- Easy, Medium, and Hard                      15

6.  Press Enter when prompted to start the quiz.

7.  Read each question and its four options (A, B, C, and D).

8.  Enter your selected answer and press Enter. Both uppercase and
    lowercase letters are accepted.

9.  Read the immediate feedback and the time taken for the question.

10.  Continue until all questions in the selected mode are completed.

11. Review the final report, including your score, accuracy, total time,
    average response time, and performance message.

6. 📂 Project Structure

simple-quiz-game/
│
├── main.c        # Main C source code containing the quiz questions and program logic

├── README.md     # Project documentation and usage instructions

└── .gitignore    # Optional Git ignore rules for generated files


7. ⏱️ Unique Feature: Response Timer & Performance Analytics

The project's key feature is its response-time measurement and
performance analysis system.

-   Question Timing: Records the start and end time for each
    question using `time()` and calculates the elapsed time with
    `difftime()`.
    
-   Total Time Calculation: Adds the response times to calculate the
    total quiz time.
    
-   Average Response Time: Calculates the average time taken per
    question.
    
-   Accuracy Calculation: Calculates the percentage of correct
    answers.
    
-   Performance Evaluation: Displays an automatic performance
    message based on the final accuracy percentage.

This feature helps learners assess both their subject knowledge and
their speed when answering questions.

8. 📊 Performance Evaluation

The program evaluates the final accuracy percentage using the following
criteria:

  Accuracy            Performance Message
  ------------------- ------------------------------------
  100%                Outstanding! Perfect Score!
  
  75% to below 100%   Excellent Job!
  
  50% to below 75%    Good Effort! Room for improvement.
  
  Below 50%           Needs Practice. Keep learning!

9. 🔮 Future Improvements

Possible future improvements include:

-   Adding more questions and subject categories.
  
-   Saving candidate scores and quiz history in a file.
   
-   Adding a leaderboard to compare results.
  
-   Allowing users to set a time limit for each question.
  
-   Adding random question selection.

10. 👨‍💻 Author

MD HAMIM SHAHRIAR\

Department of Computer Science & Engineering\

Pundra University of Science & Technology\

Batch: 20\

Roll Number: 0322410105101042\

GitHub: [mdhamimshahriar1449-cpu](https://github.com/mdhamimshahriar1449-cpu)

------------------------------------------------------------------------

Course: Software Development Lab I\

Project: Simple Quiz Game\

Programming Language: C
