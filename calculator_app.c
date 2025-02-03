#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("5. Modulus\n6. Floor Division\n7. Power\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting...\n");
            break;
        }

        if (choice >= 1 && choice <= 7) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0)
                    printf("Result: %.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            case 5:
                if ((int)num2 != 0)
                    printf("Result: %d\n", (int)num1 %  (int)num2);
                else
                    printf("Error: Modulus by zero!\n");
                break;
            case 6:
                if (num2 != 0)
                    printf("Result: %.0lf\n", floor(num1 / num2));
                else
                    printf("Error: Division by zero!\n");
                break;
            case 7:
                printf("Result: %.2lf\n", pow(num1, num2));
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
