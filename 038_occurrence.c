#include <stdio.h>

int checkArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  
        }
    }

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
            if (count >= 3)
                return 1;  
        } else {
            count = 1; 
        }
    }

    return 0; 
}

int main() {
    int arr1[] = {1, 1, 1, 2, 2};
    int arr2[] = {1, 1, 1, 3, 3, 3, 3};

    printf("Result for arr1 = %d\n", checkArray(arr1, 5));
    printf("Result for arr2 = %d\n", checkArray(arr2, 7));

    return 0;
}
