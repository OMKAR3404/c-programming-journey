#include<stdio.h>

int main(){
    int a,b,result=0;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    
    switch(op){
        case '+': result = a+b;
        printf("%d",result);
        break;
        case '-': result = a-b;
        printf("%d",result);
        break;
        case '/': result = a/b;
        printf("%d",result);
        break;
        case '*': result = a*b;
        printf("%d",result);
        break;
        default: printf("invalid operation!");
    }
    
    
}