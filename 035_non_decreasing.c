#include <stdio.h>

int main() {
    int nums[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int count = 0;  

    for(int i = 1; i < n; i++) {
        if(nums[i] < nums[i - 1]) {
            count++;  

            if(count > 1) {
                printf("false");
                return 0;
            }

            if(i - 2 < 0 || nums[i] >= nums[i - 2]) {
                nums[i - 1] = nums[i];  // lower previous
            } else {
                nums[i] = nums[i - 1];  // raise current
            }
        }
    }

    printf("true");
    return 0;
}
