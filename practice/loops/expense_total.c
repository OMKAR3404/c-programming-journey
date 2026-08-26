#include <stdio.h>

int main(void)
{
    int days, i, expense, total = 0;

    printf("How many expenses? ");
    scanf("%d", &days);
    for (i = 1; i <= days; i++) {
        printf("Expense %d: ", i);
        scanf("%d", &expense);
        total += expense;
    }
    printf("Total spent: %d\n", total);
    return 0;
}
