#include <stdio.h>

int main()
{
    int arr[100], n, i, j, minindex,temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n-1;i++){
        minindex = i ;

        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }

        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }

    printf("sorted array :");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
    
}