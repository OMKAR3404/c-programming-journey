#include<stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    
    if(m<=100){
        if(m>90 && m<=100){
            printf("your grade is A");
        }else if (m<=89 && m>=80){
            printf("your grade is B");
        }else if (m<=79 && m>=70){
            printf("Your grade is C");
        }else if (m<=69 && m>=60){
            printf("Your grade is D");
        }else if (m<60){
            printf("Your grade is F");
            
        }
    }
return 0;
}