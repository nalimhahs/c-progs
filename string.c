#include <stdio.h>
#include <string.h>

void shifter(char *a, int pos, int len)
{
    int end, i;
    //char b[100];
    //printf("%s",a);
    end = strlen(a);
    for (i = end; i >= pos; i--)
    {
        a[i + pos] = a[i];
    }
    a[end + len] = '\0';
}

void putter(char *sub_string, char *string, int pos)
{
    int sub_len, str_len, i;
    sub_len = strlen(sub_string);
    str_len = strlen(string);
    shifter(string, pos, sub_len);
    for (i = pos; i < sub_len; i++)
    {
        string[i] = sub_string[i - sub_len];
    }
    printf("%s", string);
}

void main()
{
    char string[100];
    gets(string);
    putter("test", string, 3);
    //printf("\n%d", strlen(string));
}