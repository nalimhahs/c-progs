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
	putter(sub, string, pos);
}

void main()
{
	int pos, n, ch;
    char string[100], sub[100], new[100];
    
    printf("\nMenu\n1. Add substring to a main string\n2. Delete n characters from a main string\n3. Replace a substring in the main string with another string\nEnter Choice: ");
	scanf("%d", &ch);
	
	switch(ch){
	
		case 1:
		 
		    printf("Enter the main string: ");
			scanf("%s", &string);
			//fgets(string, sizeof(string), stdin);
			printf("Enter the sub string: ");
			scanf("%s", &sub);
			printf("Enter the position: ");
			scanf("%d", &pos);
			
			putter(sub, string, pos);  
   			printf("The modified string is: %s\n", string);
									
			break;
			
		case 2:	
		    
		    printf("Enter the main string: ");
			scanf("%s", string);		
		    printf("Enter the no of characters to delete: ");
			scanf("%d", &n);
			printf("Enter the position: ");
			scanf("%d", &pos);
			
			del(string, n, pos);
    		printf("The modified string is: %s\n", string);

			break;
		
		case 3: 
		
		    printf("Enter the main string: ");
			scanf("%s", string);
			printf("Enter the string to search: ");
			scanf("%s", sub);
			printf("Enter the string to replace: ");
			scanf("%s", new);
			
			replace(string, sub, new);  
   			printf("The modified string is: %s\n", string);
							
			break;
	
		default: printf("Invalid choice!\n");
	
	}
}
