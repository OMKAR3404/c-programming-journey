#include <stdio.h>

int is_even(int number)
{
    return number % 2 == 0;
}

int main(void)
{
    int number;

    printf("Number: ");
    scanf("%d", &number);
    if (is_even(number)) printf("Even\n");
    else printf("Odd\n");
    return 0;
}
