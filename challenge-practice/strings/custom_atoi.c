#include <stdio.h>
#include<string.h>
int my_atoi(const char str[]){
    int ret = 0,sign = 1;
    int n= strlen(str);
    
    if(str[0]=='+'){
        sign = 2;
    }else if(str[0]=='-'){
        sign = -1;
    }else if(str[0] >='0' || str[0] <= '9'){
        sign = 1;
    }
    
    
    
    if(sign == -1){
    for(int i=1;str[i] >= '0' && (int)str[i] <= '9';i++){
            ret = ret*10 + ((int)str[i] - (int)'0' ) *sign ;
            printf("%d\n",ret);
        }
    }
    else if(sign == 2){
        for(int i=1;str[i] >= '0' && (int)str[i] <= '9';i++){
            ret = ret*10 + ((int)str[i] - (int)'0' ) ;
            printf("%d\n",ret);
        }
    }else if(sign == 1){
        for(int i=0;str[i] >= '0' && (int)str[i] <= '9';i++){
            ret = ret*10 + ((int)str[i] - (int)'0' ) *sign ;
            printf("%d\n",ret);
        }
        
    }
    
        
        
    
    
    return ret;
}

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}