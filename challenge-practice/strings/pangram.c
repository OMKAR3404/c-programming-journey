#include <stdio.h>
#include<ctype.h>
void pangram(char str[]){
    int ch[128] = {0};
    while(*str!='\0'){
        ch[tolower(*str)] = 1;
        str++;
    }
    
    /*int i = 128;
     while(i!=0){
        printf("%d",ch[i]);
        i--;
    }*/
    int found = 1;
    for(int i = 'a';i<='z';i++){
        if(ch[i]==0){
            found =0;
        }
    }
    
    if(!found){
        printf("The Entered String is not a Pangram String");
    }else{
        printf("The Entered String is a Pangram String");
    }
    
}

int main()
{
    char str[100];
    scanf("%[^\n]",str);
    
    pangram(str);
    
    
    
}