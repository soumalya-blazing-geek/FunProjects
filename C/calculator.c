#include <stdio.h>
#include <math.h>
// This is a simple calculator.
// Which can calculate plus, minus, multiply, division, square, cube and interest.
int main() {
    printf(" ============================================\n");
    printf("  __.         .    __    .      .    ,       \n");
    printf(" (__ *._ _ ._ | _ /  ` _.| _.. .| _.-+- _ ._.\n");
    printf(" .__)|[ | )[_)|(/,\\__.(_]|(_.(_||(_] | (_)[  \n");
    printf("           |                                 \n");
    printf(" =================== Made By Soumalya Naskar.\n");
    // This is headline
    while (1) {
        char option[15];
        printf("\n Enter your option: ");
        scanf("%s", option);
        // Input the option
        if (strcmp(option, "plus") == 0) {
            // Addition
            float plus_1, plus_2;
            while (1) {
                printf("\n Enter the first number to plus: ");
                if (scanf("%f", &plus_1) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" Enter the second number to plus: ");
                if (scanf("%f", &plus_2) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n ANSWER: %.2f plus %.2f is %.2f\n", plus_1, plus_2, plus_1 + plus_2);
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "minus") == 0) {
            // Subtraction
            float minus_1, minus_2;
            while (1) {
                printf("\n Enter the first number to minus: ");
                if (scanf("%f", &minus_1) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" Enter the second number to minus: ");
                if (scanf("%f", &minus_2) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n ANSWER: %.2f minus %.2f is %.2f\n", minus_1, minus_2, minus_1 - minus_2);
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "multi") == 0) {
            // Multiplication
            float multi_1, multi_2;
            while (1) {
                printf("\n Enter the first number to multiply: ");
                if (scanf("%f", &multi_1) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" Enter the second number to multiply: ");
                if (scanf("%f", &multi_2) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n ANSWER: %.2f multiply %.2f is %.2f\n", multi_1, multi_2, multi_1 * multi_2);
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "div") == 0) {
            // Division
            float div_1, div_2;
            while (1) {
                printf("\n Enter the first number to division: ");
                if (scanf("%f", &div_1) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" Enter the second number to division: ");
                if (scanf("%f", &div_2) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            if (div_2 != 0) {
                printf("\n ANSWER: %.2f divided by %.2f is %.2f\n", div_1, div_2, div_1 / div_2);
            } else {
                printf("\n ERROR: Division by zero is not allowed!\n");
            }
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "square") == 0) {
            // Square
            float num;
            while (1) {
                printf("\n Enter a number to find its square: ");
                if (scanf("%f", &num) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n ANSWER: Square of %.2f is %.2f\n", num, num * num);
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "cube") == 0) {
            // Cube
            float num;
            while (1) {
                printf("\n Enter a number to find its cube: ");
                if (scanf("%f", &num) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n ANSWER: Cube of %.2f is %.2f\n", num, num * num * num);
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "square_rt") == 0) {
            // Square Root
            float num;
            while (1) {
                printf("\n Enter a number to find its square root: ");
                if (scanf("%f", &num) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            if (num >= 0) {
                printf("\n ANSWER: Square root of %.2f is %.2f\n", num, sqrt(num));
            } else {
                printf("\n ERROR: Square root of a negative number is not allowed!\n");
            }
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "cube_rt") == 0) {
            // Cube Root
            float num;
            while (1) {
                printf("\n Enter a number to find its cube root: ");
                if (scanf("%f", &num) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            if (num >= 0) {
                printf("\n ANSWER: Cube root of %.2f is %.2f\n", num, cbrt(num));
            } else {
                printf("\n ERROR: Cube root of a negative number is not allowed!\n");
            }
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "power") == 0) {
            // Power
            float base, exponent;
            while (1) {
                printf("\n Enter the base: ");
                if (scanf("%f", &base) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" Enter the exponent: ");
                if (scanf("%f", &exponent) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n ANSWER: %.2f raised to the power %.2f is %.2f\n", base, exponent, pow(base, exponent));
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "interest") == 0) {
            // Simple Interest
            float principal, rate, time;
            while (1) {
                printf("\n Enter the principal amount: ");
                if (scanf("%f", &principal) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" Enter the interest rate: ");
                if (scanf("%f", &rate) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" Enter the time (in years): ");
                if (scanf("%f", &time) == 1) break;
                printf(" ERROR: Please Enter a number value!\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n ANSWER: Simple Interest is %.2f\n", (principal * rate * time) / 100);
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "finday") == 0) {
            // Find The Day
            int findDay(int year, int month, int day) {
                if (month < 3) {
                    month += 12;
                    year--;
                }
                int k = year % 100;
                int j = year / 100;
                int dayOfWeek = ((day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7)-1;
                // Adjust dayOfWeek to have Sunday as 0, Monday as 1, ..., and Saturday as 6.
                if (dayOfWeek < 0) {
                    dayOfWeek += 7;
                }
                return dayOfWeek;
            }
            int day, month, year;
            while (1) {
                printf("\n Enter the day: ");
                if (scanf("%d", &day) == 1 && day >= 1 && day <= 31) {
                    break;
                } else {
                    printf(" ERROR: Please enter a valid day!\n");
                    while (getchar() != '\n'); // Clear input buffer
                }
            }
            while (1) {
                printf(" Enter the month: ");
                if (scanf("%d", &month) == 1 && month >= 1 && month <= 12) {
                    break;
                } else {
                    printf(" ERROR: Please enter a valid month!\n");
                    while (getchar() != '\n'); // Clear input buffer
                }
            }
            while (1) {
                printf(" Enter the year: ");
                if (scanf("%d", &year) == 1 && year >= 1) {
                    break;
                } else {
                    printf(" ERROR: Please enter a valid year!\n");
                    while (getchar() != '\n'); // Clear input buffer
                }
            }
            int dayOfWeek = findDay(year, month, day);
            const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
            if (dayOfWeek >= 0 && dayOfWeek < 7) {
                printf("\n ANSWER: The day on %d/%d/%d was %s.\n", day, month, year, days[dayOfWeek]);
            } else {
                printf("\n ERROR: Invalid date.\n");
            }
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "multi_tb") == 0) {
            // Multiplication Table
            int table;
            while (1) {
                printf("\n Enter the number for multiplication table: ");
                if (scanf("%d", &table) == 1) {
                    break;
                } else {
                    printf(" ERROR: Please enter a valid number!\n");
                    // Clear the input buffer in case of invalid input
                    while (getchar() != '\n');
                }
            }
            printf("\n ANSWER:\n");
            for (int i = 1; i <= 10; i++) {
                int result = table * i;
                printf(" ---->> %d X %d = %d <<----\n", table, i, result);
            }
            printf(" ------------------------------------------------\n");
        }
        else if (strcmp(option, "help") == 0) {
            // Help
            printf("\n (#) Enter 'plus' to select plus.\n");
            printf(" (#) Enter 'minus' to select minus.\n");
            printf(" (#) Enter 'multi' to select multiplication.\n");
            printf(" (#) Enter 'div' to select division.\n");
            printf(" (#) Enter 'square' to select square.\n");
            printf(" (#) Enter 'cube' to select cube.\n");
            printf(" (#) Enter 'square_rt' to select square root.\n");
            printf(" (#) Enter 'cube_rt' to select cube root.\n");
            printf(" (#) Enter 'power' to select power.\n");
            printf(" (#) Enter 'interest' to select interest.\n");
            printf(" (#) Enter 'finday' to select Find The Day.\n");
            printf(" (#) Enter 'multi_tb' to select Multiplication Table.\n");
            printf(" (#) Enter 'info' to select info.\n");
            printf(" (#) Enter 'quit' to select exit.\n");
            printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
        else if (strcmp(option, "info") == 0) {
            // Info
            printf("\n [#] Overview :\n");
            printf("	This guide provides information on how to use the C language calculator and its features.\n");
            printf("	The calculator is a basic tool that can perform basic arithmetic operations such as addition, subtraction, multiplication, division and lot's more.\n");
            printf("\n [#] Code structure :\n");
            printf("    The code is divided into two parts:\n");
            printf("	The main function which handles the user input and displays the result.\n");
            printf("	The calculator function which performs the calculation and returns the result.\n");
            printf("\n [#] Features :\n");
            printf("	Performs basic arithmetic operations (addition, subtraction, multiplication, and division).\n");
            printf("	User-friendly interface for entering numbers and operations.\n");
            printf("	Provides results for simple calculations.\n");
            printf("\n [#] Limitations :\n");
            printf("	Currently only performs basic arithmetic operations.\n");
            printf("	No support for more advanced calculations.\n");
            printf("	Can only handle two numbers at a time.\n");
            printf("\n [#] Support :\n");
            printf("	For any questions or issues regarding the calculator, please contact the developer Soumalya Naskar.\n");
            printf("	Just email <soumalya191@gmail.com> and you connect with the developer of this program.\n");
            printf("\n [#] Conclusion :\n");
            printf("	This calculator is a simple and easy-to-use tool for basic arithmetic calculations.\n");
            printf("	Its basic features make it a good choice for simple arithmetic operations, but it may not be suitable for more advanced calculations.\n");
            printf(" ----------------------------------------------------------------------------------------------------------------------------------------\n");
        }
        else if (strcmp(option, "quit") == 0) {
            printf("\n ~~~~~ ::: Good bye ::: ~~~~~\n");
            break; // Exit the program
        }
        else {
            // Error
            printf("\n ERROR: You have entered an invalid option!\n");
        }
    }
    return 0; // Successfully exit this program
}
// End of this code
