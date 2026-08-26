#include <stdio.h>

int main(void)
{
    int limit;
    int number;
    int divisor;
    int is_prime;

    printf("Generate primes up to: ");
    scanf("%d", &limit);
    for (number = 2; number <= limit; number++) {
        is_prime = 1;
        for (divisor = 2; divisor < number; divisor++) {
            if (number % divisor == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) printf("%d ", number);
    }
    printf("\n");
    return 0;
}