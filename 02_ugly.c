#include<stdio.h>

int main(){
    int n;

    printf("enter positive integer: ");
    scanf("%d", &n);

    while (n%2==0){n=n/2;}
    while (n%3==0){n=n/3;}
    while (n%5==0){n=n/5;}

    if(n==1){
        printf("ugly number\n");
    }
    else{
        printf("not ugly number\n");
    }
}