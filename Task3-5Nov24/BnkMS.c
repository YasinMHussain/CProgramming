//Task3-Q4:Bank Acc Management System,
// 5Nov-24,Yasin M Hussain

#include <stdio.h>
#include<conio.h>

struct BankAccount 
{
    char name[50];
    int accNumber;
    float balance;
    char accType;  
    union 
	{
        float interestRate;    
        float odLimit;  
    } accDetails;
};

main() 
{
    struct BankAccount acc;

    printf("\nEnter account holder's name: ");
    scanf(" %[^\n]s", acc.name);
    printf("\nEnter account number: ");
    scanf("%d", &acc.accNumber);
    printf("\nEnter account balance: ");
    scanf("%f", &acc.balance);
    printf("\nEnter account type (S for Savings, C for Current): ");
    scanf(" %c", &acc.accType);

    if (acc.accType == 'S') 
	{
        printf("\nEnter interest rate: ");
        scanf("%f", &acc.accDetails.interestRate);
    } 
	else if (acc.accType == 'C') 
	{
        printf("\nEnter overdraft limit: ");
        scanf("%f", &acc.accDetails.odLimit);
    } 
	else 
	{
        printf("Invalid account type!\n");
        return 1;
    }

    printf("\nAccount Details:");
    printf("\nName: %s", acc.name);
    printf("\nAccount Number: %d", acc.accNumber);
    printf("\nBalance: %.2f", acc.balance);

    if (acc.accType == 'S') 
	{
        printf("\nAccount Type: Savings");
        printf("\nInterest Rate: %.2f%%\n", acc.accDetails.interestRate);
    } 
	else 
	{
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", acc.accDetails.odLimit);
    }

    return 0;
}
