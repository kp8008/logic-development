#include<stdio.h>
#include<string.h>


int main(){
    char s[50];
    int i=0;

    printf("enter string in only 0 & 1 form : ");
    scanf("%s",&s);
    
    int len= strlen(s);


    double result=0.0;

    while(i<len && s[i]!= '.'){
        result = result * 2 + (s[i]-'0');
        i++;
    }

    if(s[i]=='.'){
        i++;
    }

    double fracvalue=0.5;

    while(i<len){
        if(s[i]=='1'){
            result = result+fracvalue;
        }
        fracvalue= fracvalue/2;
        i++;
    }
    printf("%g\n",result);
    return 0;
}