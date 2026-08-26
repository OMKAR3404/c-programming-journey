#include<stdio.h>
#include<strings.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count=0,i=0;
    
    while(str[i]!='\0'){
        count++;
        i++;
    }
    
    printf("String length is %d",count);
}