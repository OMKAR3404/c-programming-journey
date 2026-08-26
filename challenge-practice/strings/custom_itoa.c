#include <stdio.h>

void itoa(int num, char str[]){
    int c=0;
    int sign = num;
    if(num ==0){
        str[0]='0';
        str[1]='\0';
        return ;
    }
    if(num<0){
        num = -num;
    }
    
    int n = num;
    while(n!=0){
        n = n/10;
        c++;
    }
    
    int arr[c];
    n = num;
    
    
    for(int i=0;i<c;i++){
        arr[i] = num%10;
        num = num/10;
    }
    
    
    for(int i=0;i<c/2;i++){
        int temp =  arr[i];
       arr[i] = arr[c-i-1];
        arr[c-i-1] = temp;
    }
    
    
     int index=0; 
    if(sign<0){
        str[index++]='-';
    }
    
    for(int i=0;i<c;i++){
        str[index++]= (arr[i] + '0');
        
    }
    str[index]='\0';
    }



int main()
{
    int num;
    char str[10];
    
    printf("Enter the number:");
    if (scanf("%d", &num) != 1){
        printf("Integer to string is 0");
        return 0;
    }
    
    itoa(num, str);
    
    printf("Integer to string is %s", str);
}