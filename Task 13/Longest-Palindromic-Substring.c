#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestPalindrome(char *s) {
    int n = strlen(s);
    int maxLength = 1;  // The length of the longest palindromic substring
    int start = 0;      // Starting index of the longest palindromic substring
    int palindrome[n][n];       // Table to store whether a substring is a palindrome

    // Initialize the table for all substrings of length 1 to n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            palindrome[i][j] = 0;
        }
        palindrome[i][i] = 1;
    }

    // Check for substrings of length 2
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) {
            palindrome[i][i+1] = 1;
            maxLength = 2;
            start = i;
        }
    }

    // Check for substrings of length greater than 2
    for (int k = 3; k <= n; k++) {
        for (int i = 0; i < n-k+1; i++) {
            int j = i+k-1;
            if (palindrome[i+1][j-1] && s[i] == s[j]) {
                palindrome[i][j] = 1;
                if (k > maxLength) {
                    maxLength = k;
                    start = i;
                }
            }
        }
    }

    // Allocate memory for the longest palindromic substring and copy it
    char *result;
    for (int i = 0; i < maxLength; i++) {
        result[i] = s[start+i];
    }
    result[maxLength] = '\0';

    return result;
}

int main() {
    char str[] = "aacabdkacaa";
    char *longest = longestPalindrome(str);
    printf("The longest palindromic substring is: %s\n", longest);
    free(longest);
    return 0;
}