#include <stdio.h>

int main(void)
{
    int choice;
    float num1, num2, answer;

    printf("===== MY SIMPLE CALCULATOR =====\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    if (choice == 5) {
        printf("Goodbye!\n");
        return 0;
    }
    if (choice < 1 || choice > 4) {
        printf("Choose a number from 1 to 5.\n");
        return 1;
    }

    printf("Enter first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid number.\n");
        return 1;
    }
    printf("Enter second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid number.\n");
        return 1;
    }

    /* Choose the calculation requested in the menu. */
    switch (choice) {
    case 1:
        answer = num1 + num2;
        break;
    case 2:
        answer = num1 - num2;
        break;
    case 3:
        answer = num1 * num2;
        break;
    case 4:
        if (num2 == 0) {
            printf("Cannot divide by zero.\n");
            return 1;
        }
        answer = num1 / num2;
        break;
    default:
        return 1;
    }

    printf("Answer = %.2f\n", answer);
    return 0;
}
