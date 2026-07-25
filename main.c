#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_QUESTIONS 10


typedef struct {
    char question[200];
    char options[4][100];
    char answer;
} Question;

int main() {

    Question quiz[MAX_QUESTIONS] = {
        {
            "What is the main function entry point in C programming?",
            {"A. start()", "B. main()", "C. init()", "D. run()"},
            'B'
        },
        {
            "Which operator is used to get the memory address of a variable?",
            {"A. *", "B. %", "C. &", "D. #"},
            'C'
        },
        {
            "Which data type is used to store fractional numbers in C?",
            {"A. int", "B. char", "C. float", "D. void"},
            'C'
        },
        {
            "Which loop is guaranteed to execute at least once?",
            {"A. for loop", "B. while loop", "C. do-while loop", "D. foreach loop"},
            'C'
        },
        {
            "What is the output format specifier for an integer in printf?",
            {"A. %s", "B. %c", "C. %f", "D. %d"},
            'D'
        },
        {
            "Which header file is required for dynamic memory allocation functions like malloc()?",
            {"A. <stdio.h>", "B. <stdlib.h>", "C. <string.h>", "D. <math.h>"},
            'B'
        },
        {
            "What is the default value of an uninitialized local automatic variable in C?",
            {"A. 0", "B. 1", "C. NULL", "D. Garbage value"},
            'D'
        },
        {
            "Which keyword is used to prevent modification of a variable's value?",
            {"A. static", "B. const", "C. volatile", "D. register"},
            'B'
        },
        {
            "What size does a pointer variable occupy on a standard 64-bit system?",
            {"A. 2 bytes", "B. 4 bytes", "C. 8 bytes", "D. 16 bytes"},
            'C'
        },
        {
            "Which function is used to compare two strings in C?",
            {"A. strcmp()", "B. strcpy()", "C. strcat()", "D. strlen()"},
            'A'
        }
    };

    char player_name[100];
    char player_roll[50];
    int correct_count = 0;
    int incorrect_count = 0;
    char user_choice;

    printf("=========================================\n");
    printf("   WELCOME TO THE TERMINAL QUIZ GAME!    \n");
    printf("=========================================\n\n");


    printf("Enter Candidate Name : ");
    fgets(player_name, sizeof(player_name), stdin);
    player_name[strcspn(player_name, "\n")] = 0;

    printf("Enter Roll Number    : ");
    fgets(player_roll, sizeof(player_roll), stdin);
    player_roll[strcspn(player_roll, "\n")] = 0;

    printf("\nPress Enter to start the quiz...");
    getchar();

    printf("\n-----------------------------------------\n");
    printf("           QUIZ IN PROGRESS              \n");
    printf("-----------------------------------------\n\n");


    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question);

        for (int j = 0; j < 4; j++) {
            printf("  %s\n", quiz[i].options[j]);
        }


        printf("Your Answer (A/B/C/D): ");
        scanf(" %c", &user_choice);
        user_choice = toupper(user_choice);


        if (user_choice == quiz[i].answer) {
            printf(" Correct!\n\n");
            correct_count++;
        } else {
            printf(" Incorrect! Correct answer was %c.\n\n", quiz[i].answer);
            incorrect_count++;
        }
    }


    printf("=========================================\n");
    printf("               QUIZ OVER                 \n");
    printf("=========================================\n");
    printf("Candidate Name  : %s\n", player_name);
    printf("Roll Number     : %s\n", player_roll);
    printf("-----------------------------------------\n");
    printf("Total Questions : %d\n", MAX_QUESTIONS);
    printf("Correct Answers : %d\n", correct_count);
    printf("Incorrect Ans   : %d\n", incorrect_count);
    printf("Final Score     : %d / %d (%.1f%%)\n", correct_count, MAX_QUESTIONS, ((float)correct_count / MAX_QUESTIONS) * 100);
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
