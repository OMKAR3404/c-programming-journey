#include<stdio.h>
int main(){
    int n,x=5;
    scanf("%d",&n);
    
    for(int i=1;i<=n*2;i++){
        for(int j=1;j<=n;j++){
            printf("%d",i);
        }
        for(int j=n;j>=1;j++){
            printf("%d",i);
        }printf("\n");
    }
}