#include<stdio.h>

int main(){
    int n, i, temp = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++){
        if(n % i == 0){
            temp++;
        }
    }

    if (temp == 2)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}