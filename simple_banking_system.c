#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, deposit, withdraw;

    printf("===== SIMPLE BANKING SYSTEM =====\n");

    while (1) {
        printf("\n1. Deposit Money");
        printf("\n2. Withdraw Money");
        printf("\n3. Check Balance");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                if (deposit > 0) {
                    balance += deposit;
                    printf("₹%.2f deposited successfully!\n", deposit);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient balance!\n");
                } else if (withdraw > 0) {
                    balance -= withdraw;
                    printf("₹%.2f withdrawn successfully!\n", withdraw);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Current Balance: ₹%.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using our banking system!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
