#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
    char s[1024];
    int count, n;
    char cmp[] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};

    scanf("%s", s);
    n = strlen(s);

    for (int i = 0; i < 10; i++){

        count = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == cmp[i])
            {
                count++;
            }
        }
        printf("%d ", count);
    }
}