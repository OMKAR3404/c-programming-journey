#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void sort(int arr[],int n){
    int large = arr[0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);;}
            else{
            continue;
        }
        }
    }
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr1[m],arr2[n];
    
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    
    sort(arr1,m);
    sort(arr2,n);
   /*for(int i=0;i<m;i++){
        printf("%d ",arr1[i]);
    }printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }printf("\n");*/
    float med1=0,med2=0;
    float med3=0;
        if(m%2==0){
             med1=((arr1[m/2]+arr1[m/2-1])/2.0);
        }else{
            med1=arr1[(m/2)];
            }
            
        if(n%2==0){
            med2=((arr2[n/2]+arr2[n/2-1])/2.0);
        }else{
            med2=arr2[(n/2)];
        }
    med3=(med1+med2)/2.0;
    
    printf("Median of array1 : %g \n",med1);
    printf("Median of array2 : %g \n",med2);
    printf("Median of both arrays : %g ",med3);
    
}