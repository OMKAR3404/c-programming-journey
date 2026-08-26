#include<stdio.h>

int main(){
    int a,b,c,largest;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b){
        if(b>c){
            largest = b;
        }else{
            largest = c;
        }
    }else{
        largest = a;
    }
    
    printf (" Largest is %d",largest);
}