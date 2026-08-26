#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main(void)
{
    int number;

    printf("Number to square: ");
    scanf("%d", &number);
    printf("Square: %d\n", square(number));
    return 0;
}
