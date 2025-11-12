#include <stdio.h>

void main(){


    int n=0,m=1,k=0;
    int tc=0,w=0,rw=0,nc=0;
 printf("Enter number of chocolate : ");
    scanf("%d", &n);

     printf("Enter number of k : ");
    scanf("%d", &k);

    tc=n/m;
    w=tc;

    while(w>=k){
        nc=w/k;
        tc=tc+nc;
        rw=w%k;
        w=nc+rw;

    }
printf(" Total chocolate : %d",tc);
}   