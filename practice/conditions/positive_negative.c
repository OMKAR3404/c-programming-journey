#include<stdio.h>

int main(){
    signed int a;
    scanf("%d",&a);
    
    if(a>0){
        printf("The number is positive ");
    }else if(a==0){
        printf("The number is zero ");
    }else{
        printf("The number is negative ");

    }
}