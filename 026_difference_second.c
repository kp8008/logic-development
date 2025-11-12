#include<stdio.h>
#include<limits.h>

int main(){
    int largetst=0, second_largest=0, smallest=0, second_smallest=0,n,i;

    printf("enter size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    largetst=INT_MIN;
    second_largest=INT_MIN;

    smallest=INT_MAX;
    second_smallest=INT_MAX;

    for(i=0;i<n;i++){
        if(arr[i]>largetst){
            largetst=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    for(i=0;i<n;i++){
        if(arr[i]<largetst && arr[i]>second_largest){
            second_largest=arr[i];
        }
        if(arr[i]>smallest && arr[i]<second_smallest){
            second_smallest=arr[i];
        }
    }
    printf("second largets :%d \n",second_largest );
    printf("second smallest :%d \n",second_smallest);

    int difference = (second_largest-second_smallest);
    printf("ans is : %d  ",difference);

}