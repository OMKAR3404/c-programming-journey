#include <stdio.h>

int main(void)
{
    int age = 21;
    char section = 'B';
    float temperature = 28.5f;
    double price = 249.99;
    int marks1 = 76, marks2 = 83, marks3 = 91;
    double average;

    printf("Age: %d, section: %c\n", age, section);
    printf("Temperature: %.1f\n", temperature);
    printf("Product price: %.2f\n", price);

    age = 22; // assignment changes the old value
    printf("Age after birthday: %d\n", age);

    average = (double)(marks1 + marks2 + marks3) / 3;
    printf("Marks average: %.2f\n", average);
    printf("int uses %zu bytes\n", sizeof(int));
    printf("double uses %zu bytes\n", sizeof(double));

    return 0;
}
