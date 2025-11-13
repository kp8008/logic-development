#include<stdio.h>
#include<string.h>

int main(){
    char s1[50],s2[50];
    int count[26] = {0};

    printf("enter a first string : ");
    scanf("%s",&s1);

    printf("enter a second string : ");
    scanf("%s",&s2);

    if(strlen(s1)!=strlen(s2)){
        printf("not anagram \n");
        return 0;
    }

    for(int i=0;s1[i] !='\0';i++){
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }

    for(int i=0; i<26;i++){
        if(count[i]!=0){
            printf("not ana gram \n");
            return 0;
        }
    }

    printf("anagram string \n");
    return 0;

}