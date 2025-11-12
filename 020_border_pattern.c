#include<stdio.h>

void main(){
int n=4;
int size=2*n-1;



    for(int i=0;i<size;i++){
        n=4;
        for (int j=0; j<size;j++)
        {
       int top=i,min=top,left=j,right=(size-1)-j,bottom=(size-1)-i;

        if(top<min){min = top;}
        if (left < min ){ min = left;}
        if (right < min ){ min = right;}
        if (bottom < min){ min = bottom; }

        printf("%d ",n-min);


        }
        printf("\n");

    }
}