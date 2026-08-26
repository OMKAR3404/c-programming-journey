#include <stdio.h>

int third_largest(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr[2];
}

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    //Read elements into the array
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}