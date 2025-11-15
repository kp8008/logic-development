#include <stdio.h>

int main()
{
    int k = 6, i, j;
    int count = 0;
    int n=6;
    
    int arr[] = {1, 5, 7, 1,4,2};

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == k)
            {
                count++;
            }
        }
    }
    printf("count is %d ", count);
    return 0;
}