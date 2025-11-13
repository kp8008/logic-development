#include<stdio.h>
#include<limits.h>

int main(){
    int largetst=0, second_largest=0,n,i;

    printf("enter size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    largetst=INT_MIN;
    second_largest=INT_MIN;

    for(i=0;i<n;i++){
        if(arr[i]>largetst){
            largetst=arr[i];
        }
    }

    for(i=0;i<n;i++){
        if(arr[i]<largetst && arr[i]>second_largest){
            second_largest=arr[i];
        }
    }

    if(second_largest == INT_MIN) {
        second_largest = -1;
    }

     printf("ans is %d\n", second_largest);
    return 0;
}