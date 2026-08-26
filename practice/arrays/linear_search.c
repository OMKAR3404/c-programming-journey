#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target,flag=0;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
        }
    }
    if(flag){
        printf("Element Found");
    }else{
        printf("Not Found");
    }
}