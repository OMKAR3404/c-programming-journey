#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int first, second;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);
    printf("Sum: %d\n", add(first, second));
    return 0;
}
