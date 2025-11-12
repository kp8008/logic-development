#include <stdio.h>
#include <ctype.h>  // for isdigit()

int main() {
    char str[100];
    printf("Enter the pattern: ");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        int count = 0;

        while (isdigit(str[i])) {
            count = count * 10 + (str[i] - '0');
            i++;
        }

        char ch = str[i];

        if (count == 0)
            count = 1;

        for (int j = 0; j < count; j++)
            printf("%c", ch);

        i++;
    }

    return 0;
}
