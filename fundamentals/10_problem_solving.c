#include <stdio.h>
#include <string.h>

int main(void)
{
    int units, amount, i, total = 0;
    int values[5] = {10, 25, 8, 40, 17};
    char username[30];

    // electricity bill
    printf("Electricity units: ");
    scanf("%d", &units);
    if (units <= 100) printf("Bill: %.2f\n", units * 4.0);
    else printf("Bill: %.2f\n", 400.0 + (units - 100) * 6.0);

    // simple ATM check
    printf("ATM withdrawal: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= 5000) printf("Withdrawal accepted\n");
    else printf("Withdrawal rejected\n");

    for (i = 0; i < 5; i++) total += values[i];
    printf("Array average: %.2f\n", (double) total / 5);

    printf("Username: ");
    scanf("%29s", username);
    printf("Username length: %zu\n", strlen(username));
    printf("Numbers in reverse: ");
    for (i = 4; i >= 0; i--) printf("%d ", values[i]);
    printf("\n");

    return 0;
}
