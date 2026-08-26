#include<stdio.h>

int s(int n){
    if(n==0){
        return 0;
    }
    return n%10 + s(n/10);
}

int main(){
    int n;
    scanf("%d",&n);
    
    int result = s(n);
    printf("Sum of the digits is %d",result);
}