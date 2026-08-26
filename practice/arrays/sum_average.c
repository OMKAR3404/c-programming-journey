/* Find the sum and average of five values. */
#include <stdio.h>

int main(void)
{
	int numbers[5];
	int i;
	int sum = 0;

	for (i = 0; i < 5; i++) {
		printf("Number %d: ", i + 1);
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}

	printf("Sum: %d\n", sum);
	printf("Average: %.2f\n", (double) sum / 5);
	return 0;
}
