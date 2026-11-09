#include <stdio.h>

int main(void)
{
    int pin, choice;
    float balance = 2500.0f, amount;

    printf("===== SIMPLE ATM SYSTEM =====\n");
    printf("Enter PIN: ");
    if (scanf("%d", &pin) != 1 || pin != 4321) {
        printf("Invalid PIN.\n");
        return 1;
    }
    printf("Login successful!\n");

    /* Keep showing the menu until the user chooses Exit. */
    do {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice.\n");
            return 1;
        }

        switch (choice) {
        case 1:
            printf("Available Balance: Rs. %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            if (scanf("%f", &amount) != 1) {
                printf("Invalid amount.\n");
                return 1;
            }
            if (amount <= 0) {
                printf("Amount must be positive.\n");
            } else {
                balance += amount;
                printf("Deposit successful. Balance: Rs. %.2f\n", balance);
            }
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            if (scanf("%f", &amount) != 1) {
                printf("Invalid amount.\n");
                return 1;
            }
            if (amount <= 0) {
                printf("Amount must be positive.\n");
            } else if (amount > balance) {
                printf("Insufficient balance.\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful. Balance: Rs. %.2f\n", balance);
            }
            break;
        case 4:
            printf("Thank you for using the ATM demo.\n");
            break;
        default:
            printf("Choose a number from 1 to 4.\n");
        }
    } while (choice != 4);

    return 0;
}
