#include <stdio.h>

int main(void)
{
    int i, number, total = 0;
    int reverse = 0, original, digit;

    for (i = 1; i <= 7; i++) printf("Day %d\n", i);

    printf("Number for a table: ");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++) printf("%d x %d = %d\n", number, i, number * i);

    i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++;
            continue;
        }
        total += i;
        i++;
    }
    printf("Sum except 6: %d\n", total);

    printf("Number to reverse: ");
    scanf("%d", &number);
    original = number;
    do {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    } while (number != 0);
    printf("Reverse: %d, palindrome: %s\n", reverse,
           original == reverse ? "yes" : "no");

    for (i = 1; i <= 4; i++) {
        for (number = 1; number <= i; number++) printf("* ");
        printf("\n");
    }

    return 0;
}
