#include <stdio.h>
#include <string.h>

int manual_length(char text[])
{
    int length = 0;
    while (text[length] != '\0') length++;
    return length;
}

void reverse(char text[])
{
    int left = 0, right = manual_length(text) - 1;
    char temp;
    while (left < right) {
        temp = text[left];
        text[left] = text[right];
        text[right] = temp;
        left++;
        right--;
    }
}

int main(void)
{
    char first[30] = "Riya";
    char last[30] = "Kumar";
    char name[70];
    char word[30] = "level";

    strcpy(name, first);
    strcat(name, " ");
    strcat(name, last);
    printf("Name: %s\n", name);
    printf("Library length: %zu\n", strlen(name));
    printf("Manual length: %d\n", manual_length(name));
    printf("Same first name: %s\n", strcmp(first, "Riya") == 0 ? "yes" : "no");
    printf("A string ends with \\0 after its last character.\n");
    reverse(word);
    printf("Reversed word: %s\n", word);
    return 0;
}
