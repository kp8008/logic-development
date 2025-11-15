#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int myAtoi(char s[]) {
    int i = 0;
    long result = 0;  
    int sign = 1;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    while (s[i] == '0')   // skip zeros
        i++;

    while (isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');
        i++;

        if (sign == 1 && result > INT_MAX)
            return INT_MAX;
        if (sign == -1 && (-result) < INT_MIN)
            return INT_MIN;
    }

    return sign * result;
}

int main() {
    char s[] = " -042";

    int ans = myAtoi(s);
    printf("Output: %d\n", ans);

    return 0;
}
