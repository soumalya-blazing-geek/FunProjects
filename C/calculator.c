#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// This is a simple calculator.
// Which can calculate plus, minus, multiply, division, square, cube and interest.
int main() {
    system("clear"); // Clear the console
    printf(" \e[1;95m============================================\n");
    printf("  __.         .    __    .      .    ,       \n");
    printf(" (__ *._ _ ._ | _ /  ` _.| _.. .| _.-+- _ ._.\n");
    printf(" .__)|[ | )[_)|(/,\\__.(_]|(_.(_||(_] | (_)[  \n");
    printf("           |                                 \n");
    printf(" =================== Made By \e[4;35mSoumalya Naskar\e[0m.\n");
    printf("\n // \e[0;90m\e[3mType 'help' and press enter to see all options.\e[0m //\n");
    // This is headline
    while (1) {
        char option[15];
        printf("\n [\e[1;93m$\e[0m] \e[1;96mEnter your option: ");
        scanf("%s", option);
        // Input the option
        if (strcmp(option, "plus") == 0) {
            // Addition
            float plus_1, plus_2;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the first number to plus: ");
                if (scanf("%f", &plus_1) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the second number to plus: ");
                if (scanf("%f", &plus_2) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: %.2f plus %.2f is %.2f\e[0m\n", plus_1, plus_2, plus_1 + plus_2);
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "minus") == 0) {
            // Subtraction
            float minus_1, minus_2;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the first number to minus: ");
                if (scanf("%f", &minus_1) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the second number to minus: ");
                if (scanf("%f", &minus_2) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: %.2f minus %.2f is %.2f\e[0m\n", minus_1, minus_2, minus_1 - minus_2);
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "multi") == 0) {
            // Multiplication
            float multi_1, multi_2;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the first number to multiply: ");
                if (scanf("%f", &multi_1) == 1) break;
                printf(" [\e[1;91mx] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the second number to multiply: ");
                if (scanf("%f", &multi_2) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: %.2f multiply %.2f is %.2f\e[0m\n", multi_1, multi_2, multi_1 * multi_2);
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "div") == 0) {
            // Division
            float div_1, div_2;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the first number to division: ");
                if (scanf("%f", &div_1) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the second number to division: ");
                if (scanf("%f", &div_2) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            if (div_2 != 0) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: %.2f divided by %.2f is %.2f\e[0m\n", div_1, div_2, div_1 / div_2);
            } else {
                printf("\n [!] \e[41mERROR\e[0m: Division by zero is not allowed!\n");
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "square") == 0) {
            // Square
            float num;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter a number to find its square: ");
                if (scanf("%f", &num) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Square of %.2f is %.2f\e[0m\n", num, num * num);
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "cube") == 0) {
            // Cube
            float num;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter a number to find its cube: ");
                if (scanf("%f", &num) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Cube of %.2f is %.2f\e[0m\n", num, num * num * num);
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "square_rt") == 0) {
            // Square Root
            float num;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter a number to find its square root: ");
                if (scanf("%f", &num) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            if (num >= 0) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Square root of %.2f is %.2f\e[0m\n", num, sqrt(num));
            } else {
                printf("\n [!] \e[41mERROR\e[0m: Square root of a negative number is not allowed!\n");
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "cube_rt") == 0) {
            // Cube Root
            float num;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter a number to find its cube root: ");
                if (scanf("%f", &num) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            if (num >= 0) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Cube root of %.2f is %.2f\e[0m\n", num, cbrt(num));
            } else {
                printf("\n [!] \e[41mERROR\e[0m: Cube root of a negative number is not allowed!\n");
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "power") == 0) {
            // Power
            float base, exponent;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the base: ");
                if (scanf("%f", &base) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the exponent: ");
                if (scanf("%f", &exponent) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: %.2f raised to the power %.2f is %.2f\e[0m\n", base, exponent, pow(base, exponent));
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "interest") == 0) {
            // Simple Interest
            float principal, rate, time;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the principal amount: ");
                if (scanf("%f", &principal) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the interest rate: ");
                if (scanf("%f", &rate) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the time (in years): ");
                if (scanf("%f", &time) == 1) break;
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a number value!\e[0m\n");
                while (getchar() != '\n'); // Clear the input buffer
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Simple Interest is %.2f\e[0m\n", (principal * rate * time) / 100);
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
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
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the day: ");
                if (scanf("%d", &day) == 1 && day >= 1 && day <= 31) {
                    break;
                } else {
                    printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease enter a valid day!\e[0m\n");
                    while (getchar() != '\n'); // Clear input buffer
                }
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the month: ");
                if (scanf("%d", &month) == 1 && month >= 1 && month <= 12) {
                    break;
                } else {
                    printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease enter a valid month!\e[0m\n");
                    while (getchar() != '\n'); // Clear input buffer
                }
            }
            while (1) {
                printf(" \e[0m[\e[1;92mo\e[0m] Enter the year: ");
                if (scanf("%d", &year) == 1 && year >= 1) {
                    break;
                } else {
                    printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease enter a valid year!\e[0m\n");
                    while (getchar() != '\n'); // Clear input buffer
                }
            }
            int dayOfWeek = findDay(year, month, day);
            const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
            if (dayOfWeek >= 0 && dayOfWeek < 7) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: The day on %d/%d/%d was %s.\e[0m\n", day, month, year, days[dayOfWeek]);
            } else {
                printf("\n [!] \e[41mERROR\e[0m: Invalid date.\n");
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "multi_tb") == 0) {
            // Multiplication Table
            int table;
            while (1) {
                printf("\n \e[0m[\e[1;92mo\e[0m] Enter the number for multiplication table: ");
                if (scanf("%d", &table) == 1) {
                    break;
                } else {
                    printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease enter a valid number!\e[0m\n");
                    // Clear the input buffer in case of invalid input
                    while (getchar() != '\n');
                }
            }
            printf("\n [=] \e[42mANSWER\e[0m\e[1;92m:\n");
            for (int i = 1; i <= 10; i++) {
                int result = table * i;
                printf("\n ---->> %d X %d = %d <<----\n", table, i, result);
            }
            printf(" \e[0m\e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "sin") == 0) {
            // Sine
            float angle;
            printf("\n \e[0m[\e[1;92mo\e[0m] Enter the angle in degrees: ");
            if (scanf("%f", &angle) == 1) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Sin(%.2f) = %.4f\e[0m\n", angle, sin(angle * M_PI / 180));
            } else {
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a valid angle!\e[0m\n");
                while (getchar() != '\n');
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "cos") == 0) {
            // Cosine
            float angle;
            printf("\n \e[0m[\e[1;92mo\e[0m] Enter the angle in degrees: ");
            if (scanf("%f", &angle) == 1) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Cos(%.2f) = %.4f\e[0m\n", angle, cos(angle * M_PI / 180));
            } else {
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a valid angle!\e[0m\n");
                while (getchar() != '\n');
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "tan") == 0) {
            // Tangent
            float angle;
            printf("\n \e[0m[\e[1;92mo\e[0m] Enter the angle in degrees: ");
            if (scanf("%f", &angle) == 1) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Tan(%.2f) = %.4f\e[0m\n", angle, tan(angle * M_PI / 180));
            } else {
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a valid angle!\e[0m\n");
                while (getchar() != '\n');
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "log") == 0) {
            // Natural logarithm
            float num;
            printf("\n \e[0m[\e[1;92mo\e[0m] Enter a number to find its natural logarithm: ");
            if (scanf("%f", &num) == 1 && num > 0) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Log(%.2f) = %.4f\e[0m\n", num, log(num));
            } else {
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a valid positive number!\e[0m\n");
                while (getchar() != '\n');
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "log10") == 0) {
            // Logarithm base 10
            float num;
            printf("\n \e[0m[\e[1;92mo\e[0m] Enter a number to find its logarithm base 10: ");
            if (scanf("%f", &num) == 1 && num > 0) {
                printf("\n [=] \e[42mANSWER\e[0m\e[1;92m: Log10(%.2f) = %.4f\e[0m\n", num, log10(num));
            } else {
                printf(" [\e[1;91mx\e[0m] OOPS: \e[1;91mPlease Enter a valid positive number!\e[0m\n");
                while (getchar() != '\n');
            }
            printf(" \e[1;93m*-------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "help") == 0) {
            // Help
            printf("\n \e[0m(\e[1;96m@\e[0m) Enter \e[44m'plus'\e[0m to select \e[0;36mPlus.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'minus'\e[0m to select \e[0;36mMinus.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'multi'\e[0m to select \e[0;36mMultiplication.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'div'\e[0m to select \e[0;36mDivision.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'square'\e[0m to select \e[0;36mSquare.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'cube'\e[0m to select \e[0;36mCube.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'square_rt'\e[0m to select \e[0;36mSquare Root.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'cube_rt'\e[0m to select \e[0;36mCube Root.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'power'\e[0m to select \e[0;36mPower.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'interest'\e[0m to select \e[0;36mInterest.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'finday'\e[0m to select \e[0;36mFind The Day.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'multi_tb'\e[0m to select \e[0;36mMultiplication Table.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'sin'\e[0m to select \e[0;36mSine.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'cos'\e[0m to select \e[0;36mCosine.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'tan'\e[0m to select \e[0;36mTangent.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'log'\e[0m to select \e[0;36mNatural Logarithm.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'log10'\e[0m to select \e[0;36mLogarithm Base 10.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'info'\e[0m to select \e[0;36mInfo.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'clear'\e[0m to select \e[0;36mClear.\e[0m\n");
            printf(" (\e[1;96m@\e[0m) Enter \e[44m'quit'\e[0m to select \e[0;36mExit.\e[0m\n");
            printf(" \e[1;93m*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\e[0m\n");
        }
        else if (strcmp(option, "info") == 0) {
            // Info
            printf("\n \e[0m[\e[1;91m#\e[0m] \e[45mOverview\e[0m :\n");
            printf("	\e[3m~ This guide provides information on how to use the C language calculator and its features.\e[0m\n");
            printf("	\e[3m~ The calculator is a basic tool that can perform basic arithmetic operations such as addition, subtraction, multiplication, division and lot's more.\e[0m\n");
            printf("\n [\e[1;91m#\e[0m] \e[45mCode structure\e[0m :\n");
            printf("    \e[3m~ The code is divided into two parts:\e[0m\n");
            printf("	\e[3m~ The main function which handles the user input and displays the result.\e[0m\n");
            printf("	\e[3m~ The calculator function which performs the calculation and returns the result.\e[0m\n");
            printf("\n [\e[1;91m#\e[0m] \e[45mFeatures\e[0m :\n");
            printf("	\e[3m~ Performs basic arithmetic operations (addition, subtraction, multiplication, and division).\e[0m\n");
            printf("	\e[3m~ User-friendly interface for entering numbers and operations.\e[0m\n");
            printf("	\e[3m~ Provides results for simple calculations.\e[0m\n");
            printf("\n [\e[1;91m#\e[0m] \e[45mLimitations\e[0m :\n");
            printf("	\e[3m~ Currently only performs basic arithmetic operations.\e[0m\n");
            printf("	\e[3m~ No support for more advanced calculations.\e[0m\n");
            printf("	\e[3m~ Can only handle two numbers at a time.\e[0m\n");
            printf("\n [\e[1;91m#\e[0m] \e[45mSupport\e[0m :\n");
            printf("	\e[3m~ For any questions or issues regarding the calculator, please contact the developer Soumalya Naskar.\e[0m\n");
            printf("	\e[3m~ Just email <soumalya191@gmail.com> and you connect with the developer of this program.\e[0m\n");
            printf("\n [\e[1;91m#\e[0m] \e[45mConclusion\e[0m :\n");
            printf("	\e[3m~ This calculator is a simple and easy-to-use tool for basic arithmetic calculations.\e[0m\n");
            printf("	\e[3m~ Its basic features make it a good choice for simple arithmetic operations, but it may not be suitable for more advanced calculations.\e[0m\n");
            printf(" \e[1;93m*-----------------------------------------------------------------------------------------------------------------------------------------*\e[0m\n");
        }
        else if (strcmp(option, "clear") == 0) {
            // Clear
            system("clear"); // Clear the console
            printf(" \e[1;95m============================================\n");
            printf("  __.         .    __    .      .    ,       \n");
            printf(" (__ *._ _ ._ | _ /  ` _.| _.. .| _.-+- _ ._.\n");
            printf(" .__)|[ | )[_)|(/,\\__.(_]|(_.(_||(_] | (_)[  \n");
            printf("           |                                 \n");
            printf(" =================== Made By \e[4;35mSoumalya Naskar\e[0m.\n");
            // Reprint the headline after clear
        }
        else if (strcmp(option, "quit") == 0) {
            system("clear"); // Clear the console
            printf("\n \e[1;94m~~~~~\\\\ ::: \e[0m\e[43mGood Bye\e[0m\e[1;94m ::: //~~~~~\e[0m\n\n");
            break; // Exit the program
        }
        else {
            // Error
            printf("\n \e[0m[!!] \e[41mERROR\e[0m\e[1;91m: You have entered an invalid option!\e[0m\n");
        }
    }
    return 0; // Successfully exit this program
}
// End of this code
