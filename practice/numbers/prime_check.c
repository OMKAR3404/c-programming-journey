#include <stdio.h>

int main()
{
    //Write logic to check the given number is prime or not
    
    int n,flag=1;
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
        if(n == 2 ){
            flag=1;
            break;
        }
        else if(n%i==0 && i!=n ){
            flag=0;
            break;
        }
    }
    
    if(n>0){
    if(flag==1){
        printf("%d is a prime number",n);
    }else{
        printf("%d is not a prime number",n);
    }}else{
        printf("Invalid input");
    }
}