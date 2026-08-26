#include <stdio.h>

int main(void)
{
    int balance = 5000;
    int amount, age, marks, choice;

    printf("ATM amount to withdraw: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Take the cash. Balance: %d\n", balance);
    } else {
        printf("Not enough balance or invalid amount.\n");
    }

    printf("Movie ticket age: ");
    scanf("%d", &age);
    if (age < 5) printf("Free ticket\n");
    else if (age < 18) printf("Ticket: 100\n");
    else printf("Ticket: 180\n");

    printf("Student marks: ");
    scanf("%d", &marks);
    if (marks >= 90) printf("Grade A\n");
    else if (marks >= 75) printf("Grade B\n");
    else if (marks >= 40) printf("Pass\n");
    else printf("Needs practice\n");

    printf("1 Data  2 Talktime  3 Monthly pack: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("Data selected\n"); break;
        case 2: printf("Talktime selected\n"); break;
        case 3: printf("Monthly pack selected\n"); break;
        default: printf("Wrong choice\n");
    }

    return 0;
}
