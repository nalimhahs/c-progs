#include <stdio.h>
#include <string.h>

void shifter(char *a, int len, int pos)
{
    int end, i;
    end = strlen(a);
    for (i = end-1; i >= pos; i--)
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

    shifter(string, sub_len, pos);
    
    for (i = pos; i < sub_len+pos; i++)
    {
        string[i] = sub_string[i - pos];
    }
}

void del(char *string, int n, int pos)
{
	int i, a;
	a = strlen(string);
	for(i = pos; i < a; i++){
		string[i] = string[i + n];
	}	
	string[a - n] = '\0';
}

void replace(char *string, char *sub, char *new)
{
	int i, j, str_len, sub_len, flag, pos;
	str_len = strlen(string);
	sub_len = strlen(sub);
	
	for(i = 0; i < str_len; i++){
		flag = 0;
		for(j = 0; j < sub_len; j++){
			if(string[i + j] != sub[j]){
				flag = -1;
				break;
			}
			else{
				flag++;
			}
		}
		if(flag == sub_len){
			pos = i;
		}	
	}	
	del(string, sub_len, pos);
	putter(new, string, pos);
}

void main()
{
	int pos, n;
    char string[100], sub[100], new[100];
    
    printf("Enter the main string: ");
    gets(string);
    printf("Enter the sub string: ");
    gets(sub);
    printf("Enter the position: ");
    scanf("%d", &pos);
    /*
    putter(sub, string, pos);  
    printf("The modified string is: %s\n", string);

    printf("Enter the no of characters to delete: ");
    scanf("%d", &n);
    printf("Enter the position: ");
    scanf("%d", &pos);
    
    del(string, n, pos);
    printf("The modified string is: %s\n", string);
    */
    replace(string, sub, "test123");
    printf("The modified string is: %s\n", string);
    
}
