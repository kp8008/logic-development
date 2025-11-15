#include <stdio.h>

int main()
{
    int n = 5, i = 0, j = 0, k = 0;

    int a[] = {1, 12, 15, 26, 38};
    int b[] = {2, 13, 17, 30, 45};
    int merged[10];

    while (i < n && j < n)
    {
        if (a[i] < b[j])
        {
            merged[k++] = a[i++];
        }
        else
        {
            merged[k++] = b[j++];
        }
    }
    while (i < n)
    {
        merged[k++] = a[i++];
    }
    while (j < n)
    {
        merged[k++] = b[j++];
    }

    printf("Merged array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
        printf("\n");
    }

    double median;
    if (k % 2 == 0)
    {
        int mid1 = merged[k / 2 - 1];
        int mid2 = merged[k / 2];
        median = (mid1 + mid2) / 2.0;
    }
    else
    {
        median = merged[k / 2];
    }

    printf("Median = %.2f\n", median);
    return 0;
}
