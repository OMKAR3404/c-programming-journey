#include <stdio.h>
#include<string.h>
void reverse_iterative(char str[]){
    int len =strlen(str);
    for(int i=0;i<len/2;i++){
        char temp = str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
}

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
}