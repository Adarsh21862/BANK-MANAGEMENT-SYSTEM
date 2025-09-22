#include <stdio.h>
float balance = 0; // initial balance
void deposit(float amount) 
{
    balance += amount;
    printf("Deposit of ?%.2f successful.\n", amount);
}

void withdraw(float amount)
{
    if (balance < amount) 
	{
        printf("Withdrawal of ?%.2f failed: insufficient funds.\n", amount);
    } 
	else 
		{
        balance -= amount;
        printf("Withdrawal of ?%.2f successful.\n", amount);
   	 }
}

void check_balance()
 {
    printf("Your current balance is ?%.2f.\n", balance);
}
int main()
 {
    int choice;
    float amount;
    printf("*** Welcome to the Banking System ***\n");
    while (1) 
	{
        printf("\nWhat would you like to do?\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check balance\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) 
		{
            case 1: printf("Enter amount to deposit: ");
                 	scanf("%f", &amount);
               		 deposit(amount);
                	break;

            case 2: printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    withdraw(amount);
                    break;

            case 3: check_balance();
                break;

            case 4: printf("Thank you for using the Banking System.\n");
                return 0;
                
            default: printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
