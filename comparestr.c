#include <stdio.h>
#include <string.h>

void main(){
	char str1[20], str2[20];
	int i = 0;
	
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);	
	
	
	if(strlen(str1) != strlen(str2)){
		printf("Strings not equal!\n");
		return;
	}
	
	for(i = 0; i < strlen(str1); i++){
		if (*(str1 + i) != *(str2 + i)){
			printf("Strings not equal!\n");
			return;
		}
	}
	
	printf("Strings are equal!\n");

}
