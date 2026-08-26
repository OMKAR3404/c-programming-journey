#include <stdio.h>

int my_islower(char ch){
    if( ch >='a' && ch<='z'){
        return 1;
    }return 0;
}

int main()
{
    char ch;
    int ret=0;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
    
    if(ret ==1){
        printf("\nEntered character is lower case alphabet");
    }else{
        printf("\nEntered character is not lower case alphabet");
    }
}