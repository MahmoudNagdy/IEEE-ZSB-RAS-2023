#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int isNumber(char *s) {
    int num = 0, numAfterE = 1, dot = 0, exp = 0, sign = 0;
    size_t n = strlen(s);
    int i = 0;
    if (s[i] == '-') {
        sign = 1;
        i++;
    }
    for (; i < n; ++i) {
        if (s[i] == ' ') {
            if (i < n - 1 && s[i + 1] != ' ' && (num || dot || exp || sign))
                return 0;
        }
        else if (s[i] == '+' || s[i] == '-') {
            if (i > 0 && s[i - 1] != 'e'&& s[i - 1] != 'E' && s[i - 1] != ' ')
                return 0;
            sign = 1;
        }
        else if (isDigit(s[i])) {
            num = 1;
            numAfterE = 1;
        }
        else if (s[i] == '.') {
            if (dot || exp)
                return 0;
            dot = 1;
        }
        else if (s[i] == 'e' || s[i] == 'E') {
            if (exp || !num)
                return 0;
            exp = 1;
            numAfterE = 0;
        }
        else
            return 0;
    }
    return num && numAfterE;
}

int main()
{
    printf("%d", isNumber("3E+7"));
    return 0;
}