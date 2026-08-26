#include<stdio.h>
#include<string.h>

void ispalindrom(char str[]){
    //printf("12");
    int len = strlen(str);
    char cp[len+1];
    strcpy(cp,str);
    for(int i =0;i<len/2;i++){
        char temp = cp[i];
        cp[i]=cp[len-i-1];
        cp[len-i-1]=temp;
    }
  //printf("%s",cp);
    
    if(strcmp(cp,str)==0){
        printf("Yes, Entered string is palindrome");
       
    }else{
         printf("No, Entered string is not palindrome");
    }
    
}

int main(){
    char str[100];
    scanf("%99[^\n]",str);
    
    ispalindrom(str);
}