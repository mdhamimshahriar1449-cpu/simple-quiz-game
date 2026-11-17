#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define MAX_QUESTIONS 15

typedef struct {
    char question[200];
    char options[4][100];
    char answer;
    int level;
} Question;

int main() {
  
    Question quiz[MAX_QUESTIONS] = {
       
        {
            "What is the main function entry point in C programming?",
            {"A. start()", "B. main()", "C. init()", "D. run()"},
            'B', 1
        },
        {
            "Which SQL command is used to fetch data from a database table?",
            {"A. GET", "B. FETCH", "C. SELECT", "D. EXTRACT"},
            'C', 1
        },
        {
            "What is the worst-case time complexity of Bubble Sort?",
            {"A. O(1)", "B. O(n)", "C. O(n log n)", "D. O(n^2)"},
            'D', 1
        },
        {
            "Which core component of an OS directly interacts with hardware?",
            {"A. Shell", "B. Kernel", "C. GUI", "D. Compiler"},
            'B', 1
        },
        {
            "What condition must an array satisfy before applying Binary Search?",
            {"A. Must be unsorted", "B. Must be sorted", "C. Must be distinct integers", "D. Must be fixed size"},
            'B', 1
        },

        
        {
            "Which Normal Form eliminates transitive functional dependency?",
            {"A. 1NF", "B. 2NF", "C. 3NF", "D. BCNF"},
            'C', 2
        },
        {
            "Which algorithmic design paradigm does Merge Sort use?",
            {"A. Greedy Method", "B. Dynamic Programming", "C. Backtracking", "D. Divide and Conquer"},
            'D', 2
        },
        {
            "Which operator is used to access structure members using a structure pointer?",
            {"A. .", "B. ->", "C. *", "D. &"},
            'B', 2
        },
        {
            "A condition where two processes are waiting indefinitely for each other to release resources is called?",
            {"A. Starvation", "B. Paging", "C. Deadlock", "D. Thrashing"},
            'C', 2
        },
        {
            "What is the average-case time complexity of Quick Sort?",
            {"A. O(n)", "B. O(n log n)", "C. O(n^2)", "D. O(log n)"},
            'B', 2
        },

     
        {
            "Which ACID property ensures that all operations within a database transaction complete or none do?",
            {"A. Atomicity", "B. Consistency", "C. Isolation", "D. Durability"},
            'A', 3
        },
        {
            "In which situation does Quick Sort exhibit its worst-case time complexity O(n^2)?",
            {"A. Random elements", "B. Already sorted pivot choice", "C. Even length arrays", "D. Matrix arrays"},
            'B', 3
        },
        {
            "High frequency of page faults leading to excessive swapping between RAM and disk is termed?",
            {"A. Fragmentation", "B. Segmentation", "C. Thrashing", "D. Spooling"},
            'C', 3
        },
        {
            "What is the extra space complexity required by standard Merge Sort for auxiliary arrays?",
            {"A. O(1)", "B. O(log n)", "C. O(n)", "D. O(n^2)"},
            'C', 3
        },
        {
            "What default initial value is automatically assigned to an uninitialized static variable in C?",
            {"A. Garbage value", "B. 0", "C. NULL", "D. -1"},
            'B', 3
        }
    };

    char player_name[100];
    char player_roll[50];
    int mode_choice = 0;
    int correct_count = 0;
    int incorrect_count = 0;
    int total_asked = 0;
    char user_choice;
    double total_quiz_time_sec = 0.0;

    printf("=========================================\n");
    printf("   WELCOME TO THE TERMINAL QUIZ GAME!    \n");
    printf("=========================================\n\n");

  

    printf("Enter Candidate Name : ");
    fgets(player_name, sizeof(player_name), stdin);
    player_name[strcspn(player_name, "\n")] = 0;

    printf("Enter Roll Number    : ");
    fgets(player_roll, sizeof(player_roll), stdin);
    player_roll[strcspn(player_roll, "\n")] = 0;


    printf("\nSelect Level / Game Mode:\n");
    printf("  1. Level 1 (Easy Only - 5 Questions)\n");
    printf("  2. Level 2 (Medium Only - 5 Questions)\n");
    printf("  3. Level 3 (Hard Only - 5 Questions)\n");
    printf("  4. All Play Option (All 15 Questions across 3 Levels)\n");
    printf("Enter your choice (1-4): ");
    
    while (scanf("%d", &mode_choice) != 1 || mode_choice < 1 || mode_choice > 4) {
        printf("Invalid selection. Please enter 1, 2, 3, or 4: ");
        while (getchar() != '\n'); 
    }
    
  
    while (getchar() != '\n');

    printf("\nPress Enter to start the quiz...");
    getchar();

    for (int i = 0; i < MAX_QUESTIONS; i++) {
        
        if (mode_choice != 4 && quiz[i].level != mode_choice) {
            continue;
        }

        total_asked++;

       
        if (mode_choice == 4) {
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
        } else if (total_asked == 1) {
            printf("\n=========================================\n");
            if (mode_choice == 1) printf("            LEVEL 1: EASY                \n");
            else if (mode_choice == 2) printf("           LEVEL 2: MEDIUM               \n");
            else if (mode_choice == 3) printf("            LEVEL 3: HARD                \n");
            printf("=========================================\n\n");
        }

        
        printf("Question %d (Level %d): %s\n", total_asked, quiz[i].level, quiz[i].question);

        for (int j = 0; j < 4; j++) {
            printf("  %s\n", quiz[i].options[j]);
        }


        time_t q_start_time = time(NULL);

        
        printf("Your Answer (A/B/C/D): ");
        scanf(" %c", &user_choice);
        user_choice = toupper((unsigned char)user_choice);

      

        time_t q_end_time = time(NULL);
        double q_time_sec = difftime(q_end_time, q_start_time);
        double q_time_min = q_time_sec / 60.0;
        total_quiz_time_sec += q_time_sec;


        if (user_choice == quiz[i].answer) {
            printf(" Correct! (Time taken: %.2f min / %.0f sec)\n\n", q_time_min, q_time_sec);
            correct_count++;
        } else {
            printf(" Incorrect! Correct answer was %c. (Time taken: %.2f min / %.0f sec)\n\n", 
                   quiz[i].answer, q_time_min, q_time_sec);
            incorrect_count++;
        }
    }


    double total_quiz_time_min = total_quiz_time_sec / 60.0;
    double avg_time_sec = total_asked > 0 ? (total_quiz_time_sec / total_asked) : 0.0;
    double avg_time_min = avg_time_sec / 60.0;
    double percentage = total_asked > 0 ? ((double)correct_count / total_asked) * 100.0 : 0.0;

   
    printf("=========================================\n");
    printf("               QUIZ OVER                 \n");
    printf("=========================================\n");
    printf("Candidate Name     : %s\n", player_name);
    printf("Roll Number        : %s\n", player_roll);
    printf("-----------------------------------------\n");
    printf("Mode Played        : ");
    if (mode_choice == 1) printf("Level 1 (Easy Only)\n");
    else if (mode_choice == 2) printf("Level 2 (Medium Only)\n");
    else if (mode_choice == 3) printf("Level 3 (Hard Only)\n");
    else printf("All Play Option (15 Questions)\n");

    printf("Total Questions    : %d\n", total_asked);
    printf("Correct Answers    : %d\n", correct_count);
    printf("Incorrect Answers  : %d\n", incorrect_count);
    printf("Accuracy Percentage: %.1f%%\n", percentage);
    printf("Total Time Taken   : %.2f min (%.0f sec)\n", total_quiz_time_min, total_quiz_time_sec);
    printf("Avg Time/Question  : %.2f min (%.1f sec)\n", avg_time_min, avg_time_sec);
    printf("-----------------------------------------\n");


    if (percentage == 100.0) {
        printf("Performance        : Outstanding! Perfect Score!\n");
    } else if (percentage >= 75.0) {
        printf("Performance        : Excellent Job!\n");
    } else if (percentage >= 50.0) {
        printf("Performance        : Good Effort! Room for improvement.\n");
    } else {
        printf("Performance        : Needs Practice. Keep learning!\n");
    }
    printf("=========================================\n");

    return 0;
}
