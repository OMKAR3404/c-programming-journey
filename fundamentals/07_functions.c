#include <stdio.h>

float bill(int units);
int biggest(int a, int b, int c);
int is_prime(int number);
long long factorial(int number);
void hello(void);

float bill(int units)
{
    return units * 6.0f;
}

int biggest(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int is_prime(int number)
{
    int i;
    if (number < 2) return 0;
    for (i = 2; i < number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

long long factorial(int number)
{
    if (number <= 1) return 1;
    return number * factorial(number - 1);
}

void hello(void)
{
    printf("This came from a void function.\n");
}

int main(void)
{
    hello();
    printf("Electricity bill: %.2f\n", bill(145));
    printf("Biggest: %d\n", biggest(12, 20, 8));
    printf("19 is prime: %s\n", is_prime(19) ? "yes" : "no");
    printf("5 factorial: %lld\n", factorial(5));
    return 0;
}
