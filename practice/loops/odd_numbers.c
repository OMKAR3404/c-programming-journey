#include <stdio.h>

int main(void)
{
    int i;

    // print odd numbers from 1 to 100
    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
