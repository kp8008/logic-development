#include <stdio.h>
#include <string.h>

char findFirstRepeated(char s[]) {
    int n = strlen(s);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                return s[i];  
            }
        }
    }
    
    return '\0';  
}

int main() {
    char s[100];
    
    printf("Enter a string: ");
    scanf("%s", s);
    
    char result = findFirstRepeated(s);
    
    if (result != '\0') {
        printf("Output: %c\n", result);
    } else {
        printf("No repeated character found\n");
    }
    
    return 0;
}
