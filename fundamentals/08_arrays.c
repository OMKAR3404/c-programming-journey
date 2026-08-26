#include <stdio.h>

void print_array(int values[], int size)
{
    int i;
    for (i = 0; i < size; i++) printf("%d ", values[i]);
    printf("\n");
}

int main(void)
{
    int marks[5] = {72, 88, 64, 91, 79};
    int i, total = 0, max = marks[0], min = marks[0];
    int wanted, found = -1, temp;
    int matrix[2][2] = {{1, 2}, {3, 4}};

    printf("Marks: ");
    print_array(marks, 5);
    for (i = 0; i < 5; i++) {
        total += marks[i];
        if (marks[i] > max) max = marks[i];
        if (marks[i] < min) min = marks[i];
    }
    printf("Average %.2f, max %d, min %d\n", (double) total / 5, max, min);

    printf("Find a mark: ");
    scanf("%d", &wanted);
    for (i = 0; i < 5; i++) {
        if (marks[i] == wanted) found = i;
    }
    printf("Index: %d\n", found);

    for (i = 0; i < 4; i++) {
        if (marks[i] > marks[i + 1]) {
            temp = marks[i];
            marks[i] = marks[i + 1];
            marks[i + 1] = temp;
        }
    }
    printf("After a simple sort pass: ");
    print_array(marks, 5);

    printf("Matrix first row: %d %d\n", matrix[0][0], matrix[0][1]);
    return 0;
}
