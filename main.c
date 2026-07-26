#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define MAX_QUESTIONS 15
#define QUESTIONS_PER_LEVEL 5

// Structure to represent a single quiz question
typedef struct {
    char question[200];
    char options[4][100];
    char answer; // Expected input: 'A', 'B', 'C', or 'D'
    int level;   // 1: Easy, 2: Medium, 3: Hard
} Question;

int main() {
    // Array of 15 quiz questions across 3 levels (5 questions each)
    Question quiz[MAX_QUESTIONS] = {
        // --- LEVEL 1: EASY ---
        {
            "What is the main function entry point in C programming?",
            {"A. start()", "B. main()", "C. init()", "D. run()"},
            'B', 1
        },
        {
            "Which data type is used to store fractional numbers in C?",
            {"A. int", "B. char", "C. float", "D. void"},
            'C', 1
        },
        {
            "Which format specifier is used for an integer in printf?",
            {"A. %s", "B. %c", "C. %f", "D. %d"},
            'D', 1
        },
        {
            "Which symbol is used for single-line comments in C?",
            {"A. //", "B. /*", "C. #", "D. --"},
            'A', 1
        },
        {
            "Every statement in C must end with which symbol?",
            {"A. Period (.)", "B. Semicolon (;)", "C. Colon (:)", "D. Comma (,)"},
            'B', 1
        },

        // --- LEVEL 2: MEDIUM ---
        {
            "Which operator is used to get the memory address of a variable?",
            {"A. *", "B. %", "C. &", "D. #"},
            'C', 2
        },
        {
            "Which loop is guaranteed to execute at least once?",
            {"A. for loop", "B. while loop", "C. do-while loop", "D. foreach loop"},
            'C', 2
        },
        {
            "Which header file is required for dynamic memory functions like malloc()?",
            {"A. <stdio.h>", "B. <stdlib.h>", "C. <string.h>", "D. <math.h>"},
            'B', 2
        },
        {
            "Which function is used to compare two strings in C?",
            {"A. strcmp()", "B. strcpy()", "C. strcat()", "D. strlen()"},
            'A', 2
        },
        {
            "Which keyword is used to prevent modification of a variable's value?",
            {"A. static", "B. const", "C. volatile", "D. register"},
            'B', 2
        },

        // --- LEVEL 3: HARD ---
        {
            "What is the default value of an uninitialized local automatic variable in C?",
            {"A. 0", "B. 1", "C. NULL", "D. Garbage value"},
            'D', 3
        },
        {
            "What size does a pointer variable occupy on a standard 64-bit system?",
            {"A. 2 bytes", "B. 4 bytes", "C. 8 bytes", "D. 16 bytes"},
            'C', 3
        },
        {
            "Which keyword is used to retain a variable's value between function calls?",
            {"A. static", "B. auto", "C. extern", "D. volatile"},
            'A', 3
        },
        {
            "What does malloc() return if memory allocation fails?",
            {"A. 0", "B. -1", "C. NULL", "D. Void"},
            'C', 3
        },
        {
            "Which operator is used to access structure members using a structure pointer?",
            {"A. .", "B. ->", "C. *", "D. &"},
            'B', 3
        }
    };

    char player_name[100];
    char player_roll[50];
    int correct_count = 0;
    int incorrect_count = 0;
    char user_choice;
    double total_quiz_time = 0.0;

    printf("=========================================\n");
    printf("   WELCOME TO THE TERMINAL QUIZ GAME!    \n");
    printf("=========================================\n\n");

    // Input Candidate Name and Roll Number
    printf("Enter Candidate Name : ");
    fgets(player_name, sizeof(player_name), stdin);
    player_name[strcspn(player_name, "\n")] = 0;

    printf("Enter Roll Number    : ");
    fgets(player_roll, sizeof(player_roll), stdin);
    player_roll[strcspn(player_roll, "\n")] = 0;

    printf("\nPress Enter to start the quiz...");
    getchar();

    // Loop through all 15 questions
    for (int i = 0; i < MAX_QUESTIONS; i++) {
        // Display Level Header at the start of each 5-question set
        if (i == 0) {
            printf("\n=========================================\n");
            printf("            LEVEL 1: EASY                \n");
            printf("=========================================\n\n");
        } else if (i == 5) {
            printf("\n=========================================\n");
            printf("           LEVEL 2: MEDIUM               \n");
            printf("=========================================\n\n");
        } else if (i == 10) {
            printf("\n=========================================\n");
            printf("            LEVEL 3: HARD                \n");
            printf("=========================================\n\n");
        }

        printf("Question %d (Level %d): %s\n", i + 1, quiz[i].level, quiz[i].question);

        // Print multiple choice options
        for (int j = 0; j < 4; j++) {
            printf("  %s\n", quiz[i].options[j]);
        }

        // Feature 1: Start timer for this specific question
        time_t q_start_time = time(NULL);

        // Prompt user input
        printf("Your Answer (A/B/C/D): ");
        scanf(" %c", &user_choice);
        user_choice = toupper(user_choice);

        // Feature 1: End timer and calculate time taken for this question
        time_t q_end_time = time(NULL);
        double q_time_taken = difftime(q_end_time, q_start_time);
        total_quiz_time += q_time_taken;

        // Validate answer and display time taken for current question
        if (user_choice == quiz[i].answer) {
            printf(" Correct! (Time taken: %.0f sec)\n\n", q_time_taken);
            correct_count++;
        } else {
            printf(" Incorrect! Correct answer was %c. (Time taken: %.0f sec)\n\n", quiz[i].answer, q_time_taken);
            incorrect_count++;
        }
    }

    // Display Final Score Summary
    printf("=========================================\n");
    printf("               QUIZ OVER                 \n");
    printf("=========================================\n");
    printf("Candidate Name  : %s\n", player_name);
    printf("Roll Number     : %s\n", player_roll);
    printf("-----------------------------------------\n");
    printf("Total Questions : %d (5 Easy, 5 Medium, 5 Hard)\n", MAX_QUESTIONS);
    printf("Correct Answers : %d\n", correct_count);
    printf("Incorrect Ans   : %d\n", incorrect_count);
    printf("Final Score     : %d / %d (%.1f%%)\n", correct_count, MAX_QUESTIONS, ((float)correct_count / MAX_QUESTIONS) * 100);
    printf("Total Time Taken: %.0f seconds (avg %.1f sec/question)\n", total_quiz_time, total_quiz_time / MAX_QUESTIONS);
    printf("-----------------------------------------\n");

    if (correct_count == MAX_QUESTIONS) {
        printf("Performance: Excellent!\n");
    } else if (correct_count >= MAX_QUESTIONS / 2) {
        printf("Performance: Good job!\n");
    } else {
        printf("Performance: Better luck next time!\n");
    }

    return 0;
}
