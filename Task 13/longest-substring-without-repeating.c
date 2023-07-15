#include <stdio.h>
#include <string.h>



int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int charIndex[256] = {0};

    for (int i = 0; i < n; i++) {
        if (charIndex[s[i]] > start) {
            start = charIndex[s[i]];
        }
        if (i - start + 1 > maxLength) {
            maxLength = i - start + 1;
        }
        charIndex[s[i]] = i + 1;
    }

    return maxLength;
}

int main() {
    char str[] = "pwwkew";
    int length = lengthOfLongestSubstring(str);
    printf("The length is %d.\n", length);
    return 0;
}