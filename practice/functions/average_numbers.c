#include <stdio.h>

float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int main(void)
{
    float a, b, c;

    printf("Enter three marks: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Average: %.2f\n", average(a, b, c));
    return 0;
}
