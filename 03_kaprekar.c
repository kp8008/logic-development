#include<stdio.h>

int main(){
    int n, square,count=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    square = n*n;

    int temp = n;
    while(temp!=0){
        count++;
        temp = temp/10;
    }
    int divisor = 1;
    for(int i=0;i<count;i++){
        divisor = divisor * 10;
    }
    int left = square / divisor;
    int right = square % divisor;
    
    if(left + right == n){
        printf("%d is a Kaprekar number.\n", n);
    }
    else{
        printf("%d is not a Kaprekar number.\n", n);
    }
}