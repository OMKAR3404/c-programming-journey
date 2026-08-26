#include <stdio.h>

int my_isalnum(char ch){
    if((ch >= 'A' && ch <='Z' )||( ch >='a' && ch<='z' )|| (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

int main()
{
    char ch;
    int ret=0;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
    
    if(ret==1){
        printf("\nEntered character is alphanumeric character.");
    }else{
        printf("\nEntered character is not alphanumeric character.");

    }
    
    return 0;
}