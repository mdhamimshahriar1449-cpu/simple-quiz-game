#include <stdio.h>
#include <ctype.h>

#define MAX_QUESTIONS 5

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
        }
    };

    int score = 0;
    char user_choice;

    printf("=========================================\n");
    printf("   WELCOME TO THE TERMINAL QUIZ GAME!    \n");
    printf("=========================================\n\n");

   
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
            score++;
        } else {
            printf(" Incorrect! Correct answer was %c.\n\n", quiz[i].answer);
        }
    }


    printf("=========================================\n");
    printf("               QUIZ OVER                 \n");
    printf("=========================================\n");
    printf("Your Final Score: %d / %d (%.1f%%)\n", score, MAX_QUESTIONS, ((float)score / MAX_QUESTIONS) * 100);

    if (score == MAX_QUESTIONS) {
        printf("Performance: Excellent!\n");
    } else if (score >= MAX_QUESTIONS / 2) {
        printf("Performance: Good job!\n");
    } else {
        printf("Performance: Better luck next time!\n");
    }

    return 0;
}
