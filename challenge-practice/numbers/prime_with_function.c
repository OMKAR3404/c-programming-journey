#include <stdio.h>

int is_prime(int n){
    if (n==1){
        printf("%d is not a prime number",n);
        return -1;
    }
    else{
    int flag=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=0;
            break;
            }
        }
        return flag;
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int fl = is_prime(n);
    if(n < 0){
        printf("Invalid input");
    }else if(fl){
        printf("%d is a prime number",n);
    }else{
        printf("%d is not a prime number",n);
    }
    return 0;
}