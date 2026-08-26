#include <stdio.h>

int main(void)
{
    int age, units;
    float price, salary;
    int ch;

    printf("Your age: ");
    scanf("%d", &age);
    printf("Next year: %d\n", age + 1);

    printf("Shopping quantity and price: ");
    scanf("%d %f", &units, &price);
    printf("Shopping total: %.2f\n", units * price);

    printf("Monthly salary: ");
    scanf("%f", &salary);
    printf("Salary after a 5%% bonus: %.2f\n", salary * 1.05f);

    while ((ch = getchar()) != '\n' && ch != EOF) {
        // remove the leftover newline
    }
    printf("Type one character: ");
    ch = getchar();
    printf("You typed: ");
    putchar(ch);
    putchar('\n');

    return 0;
}
