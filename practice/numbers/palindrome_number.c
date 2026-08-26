#include<stdio.h>
int main(){
    int num,a,rev=0;
    scanf("%d",&num);
    a=num;
    while(a!=0){
        int b=a%10;
        rev = b+ 10*rev;
        a=a/10;
        
    }
    //printf("%d",rev);
    if(rev==num){
        printf("The Entered number is an palindrome.");
    }else{
        printf("The Entered number is not an palindrome.");
        
    }
}