#include <stdio.h>
#include <string.h>
#define stop "!"

void main(){
    char s[100], unique[100] = {0}, exist = 0;
    printf("Enter ! if you want to stop\n");
    printf("Enter a string:\n");
    while (1)
    {
        gets(s);
        int len = strlen(s);

        for(int i = 0; i < len; i++)
  	{
  		for(int j = i + 1; j < len; j++)
  		{
  			if(s[j] == s[i])  
			{
  				for(int k = j; k < len; k++)
				{
					s[k] = s[k + 1];
				}
 			}
		}
	}

        for(int i = 0; i < len; i++){
            if(s[i] != s[i + 1]){
                printf("%c", s[i]);
            }
            
        }

        if (strcmp(s, stop) == 0) {
            break;
        }

        printf("\n");
    }   

}