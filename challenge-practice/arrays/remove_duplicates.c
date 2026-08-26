#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size){
    for(int i=0;i<size;i++){
        
        int found = 0;
        for(int j=0;j<*new_size;j++){
            if(arr1[i]==arr2[j]){
                found=1;
                break;
            }
        }
        if(!found){
            arr2[*new_size]=arr1[i];
            (*new_size)++;
        }
    }
}

int main()
{
    int n,n2=0;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    fun(arr1,n,arr2,&n2);
    printf("After removing duplicates: ");
    for(int i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }
    
    
}

