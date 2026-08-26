#include <stdio.h>

int main(void)
{
    int money = 1000;
    int spent = 275;
    int age = 20;
    int marks = 68;
    int answer;
    char can_vote;

    printf("Add: %d\n", 17 + 5);
    printf("Remainder: %d\n", 17 % 5);

    money -= spent;
    money += 50;
    printf("Money left after spending and adding 50: %d\n", money);

    printf("Adult: %d\n", age >= 18);
    printf("Passed: %d\n", marks >= 40);
    printf("Can enter exam: %d\n", marks >= 40 && age >= 18);

    answer = 5 + 3 * 2; // multiplication happens first
    printf("5 + 3 * 2 = %d\n", answer);
    printf("(5 + 3) * 2 = %d\n", (5 + 3) * 2);

    age++;
    printf("Age after ++: %d\n", age);
    age--;
    can_vote = age >= 18 ? 'Y' : 'N';
    printf("Can vote? %c\n", can_vote);

    return 0;
}
