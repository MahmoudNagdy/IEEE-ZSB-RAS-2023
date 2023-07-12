#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
  char ch;
  char s[50];
  char sen[100];

  scanf("%c", &ch);
  scanf("%s", s);
  scanf("\n");
  scanf("%[^\n]%*c", sen);

  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s", sen);
}
