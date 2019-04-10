#include<stdio.h>
#include<string.h>

int counter(char *str, char ch){
	int count = 0, i;

	for(i = 0; i < strlen(str); i++){
		if(str[i] == ch)
			count++;
	} 
	
	return count;
}


int check_occurance(char *cache, char ch){
	int i = 0, c = 0;

	for(i = 0; i < strlen(cache); i++){
		if(ch == cache[i]){
			//printf("%c\n", cache[i]);		
			c++;
			break;
		}
	}
	
	if(c != 0)
		return 1;
	else
		return 0;
}


void main(){
	char str[100], cache[100];
	int count=0, i, k=0;
	
	printf("Enter string: \n");
	gets(str);

	for(i = 0; i < strlen(str); i++){
		if(!(check_occurance(cache, str[i]))){
			cache[k] = str[i];
			k++;
			printf("\nThe character '%c' occurs %d time in the string.\n", str[i], counter(str, str[i]));	
		}	
	}
	
}

