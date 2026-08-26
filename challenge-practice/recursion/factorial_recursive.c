#include <stdio.h>

int main()
{
    static int num;
    static unsigned long long int fact = 1;
    static int first= 1;
    
    
    if(first){
        scanf("%d",&num);
        first=0;
    }
    
    if(num<0){
        printf("Invalid input");
    }else{
    if(num==0){
        printf("Factorial of the given number is %llu",fact);
        return 0;
    }
    fact *= num;
    num--;
    main();
    }
    
    
    
    
}