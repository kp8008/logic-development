#include <stdio.h>
#include<stdbool.h>

bool isInArray(int a[], int m, int index,int n)
{
    if(index==n-1){
        
        return false;
    }
    else if(a[index]==m){
        return true;
    }

    return isInArray( a, m, index + 1, n);
}

int main()
{

    int n,index,m,result;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("enter elements : ");
    for (index = 0; index < n; index++)
    {
        scanf("%d", &a[index]);
    }

    printf("enter element to serch :");
    scanf("%d",&m);

    result =  isInArray(a, m, 0 ,n);

     if (result == 1) {
        printf("Element %d is present in the array\n", m);
    } else {
        printf("Element %d is not present in the array\n", m);
    }

    return 0;

}
