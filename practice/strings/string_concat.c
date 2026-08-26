#include<stdio.h>
#include<string.h>

void my_strcat(char str[],char str1[],char str2[],int len , int len1){
    int len2 = len + len1;
    for(int i=0;i<len;i++){
        str2[i]=str[i];
    }
    for(int i=0;i<len1;i++){
        str2[len+i]=str1[i];
    }
    str2[len2]='\0';
}
int main(){
    char str[100],str1[100],str2[100];
    scanf("%s %s",str,str1);
    int len,len1;
    len= strlen(str);
    len1=strlen(str1);
     my_strcat(str,str1,str2,len,len1);
printf("concatenate string is %s",str2);
    
}
