#include <stdio.h>
#include <string.h>


int currentBalance = 0;

/*===Withdrawal===*/

int withdraw(int amount) {
    if (currentBalance < amount) {
        printf("\n Transaction Failed: You do not have enough balance to withdraw %d.\n", amount);
        printf("Current Balance: %d\n", currentBalance);
        return 0; // Return 0 on failure
    }

    currentBalance = currentBalance - amount;
    printf("\nSuccessful Withdrawal of %d.\n", amount);
    printf("New Balance: %d\n", currentBalance);
    return 1; // Return 1 on success
}

/*===Deposit===*/

void deposit(int amount) {
    currentBalance = currentBalance + amount;
    printf("\n %d Has Been Deposited to your Account.\n", amount);
    printf("New Balance: %d\n", currentBalance);
}

/*===Balance===*/

int checkBalance() {
    printf("\n Your Current Balance is: %d\n", currentBalance);
    return currentBalance;
}


int main(void){
    char PIN[16] = "1234" ;
    char inputPin[16];



    puts("AUTOMATIC TELLER MACHINE");
    puts("========================");

    printf("Enter Your Access Pin\n");
    scanf("%15s",&inputPin);

    if(strlen(inputPin) < 4){
        puts("\033[31m========================");
        printf("PIN TOO SHORT \n");
        puts("========================\033[0m");
    } else if(strlen(inputPin) == 4){

        if(strcmp(inputPin, PIN) == 0){
            puts("\033[32m========================");
            printf("ACCESS GRANTED \n");
            puts("========================\033[0m");

            int option = 0;
    int amount = 0;

    printf("======================================\n");
    printf("  Hello! Welcome To Our C ATM System\n");
    printf("======================================\n");


    do {
        printf("\nHow can we help you?\n");
        printf(" 1. Deposit Cash\n");
        printf(" 2. Withdraw Cash\n");
        printf(" 3. Check Balance\n");
        printf(" 4. Exit\n");
        printf("Enter your option (1-4): ");


        if (scanf("%d", &option) != 1) {
            printf("\nInvalid input. Please enter a number.\n");
            while (getchar() != '\n');
            option = 0;
            continue;
        }

        switch (option) {
            case 1:
                printf("Enter the amount to Deposit: ");
                scanf("%d", &amount);
                deposit(amount);
                break;

            case 2:
                printf("Enter the amount to Withdraw: ");
                scanf("%d", &amount);
                withdraw(amount);
                break;

            case 3:
                checkBalance();
                break;

            case 4:
                printf("\nThank you for banking with us. Goodbye! \n");
                break;

            default:
                printf("\nInvalid option. Please choose 1, 2, 3, or 4.\n");
                break;

        }

    } while (option != 4);
    return 0;

    }
        else {
            puts("\033[31m========================");
            printf("ACCESS DENIED \n");
            puts("========================\033[0m");
    }

    }
    else{
        puts("\033[31m========================");
        printf("PIN TOO LONG \n");
        puts("========================\033[0m");
        }

}
