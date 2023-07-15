#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *multiply(char *num1, char *num2) {
    if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0) {
        return strdup("0");
    }

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    char *result = (char *) calloc(len1 + len2 + 1, sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int prod = (num1[i] - '0') * (num2[j] - '0');
            int l1 = i + j;
            int l2 = i + j + 1;
            int sum = prod + result[l2];
            result[l2] = sum % 10;
            result[l1] += sum / 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && result[i] == 0) {
        i++;
    }

    char *str = (char *) malloc((len1 + len2 - i + 1) * sizeof(char));
    if (str == NULL) {
        free(result);
        return NULL;
    }
    int j = 0;
    while (i < len1 + len2) {
        str[j++] = result[i++] + '0';
    }
    str[j] = '\0';

    free(result);
    return str;
}

int main() {
    char num1[] = "123";
    char num2[] = "789";
    char *result = multiply(num1, num2);
    printf("The result is: %s\n", result);
    free(result);
    return 0;
}