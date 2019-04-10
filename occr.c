#include<stdio.h>
#include<string.h>

void main(){
	char str[100], ch;
	int count=0, i;
	
	printf("Enter string: \n");
	gets(str);

	printf("Enter character to count: \n");
	scanf("%c", &ch);
	for(i = 0; i < strlen(str); i++){
		if(str[i] == ch)
			count++;
	}
	
	printf("\nThe character '%c' occurs %d time in the string.\n", ch, count);

}
