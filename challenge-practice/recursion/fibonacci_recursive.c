#include <stdio.h>

void positive_fibonacci(int limit, int f, int s){
    if(f>limit){
        return ;
    }
    printf("%d, ",f);
        positive_fibonacci(limit , s,f+s);
    }
    

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit<0){
        printf("Invalid input");
    }else{
    positive_fibonacci(limit, 0, 1);
    }
}