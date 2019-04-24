#include <stdio.h>
#include <string.h>

void shifter(char *a, int len)
{
    int end, i;
    end = strlen(a);
    for (i = end-1; i >= len-1; i--)
    {
        a[i + len] = a[i];
    }
    a[end + len] = '\0';
}

void putter(char *sub_string, char *string, int pos)
{
    int sub_len, str_len, i;
    sub_len = strlen(sub_string);
    str_len = strlen(string);

    shifter(string, sub_len);
    
    for (i = pos; i < sub_len+pos; i++)
    {
        string[i] = sub_string[i - pos];
    }
}

void main()
{
	int pos;
    char string[100], sub[100];
    
    printf("Enter the main string: ");
    gets(string);
    printf("Enter the sub string: ");
    gets(sub);
    printf("Enter the position: ");
    scanf("%d", &pos);
    
    putter(sub, string, pos);
    
    printf("The modified string is: %s\n", string);
}
