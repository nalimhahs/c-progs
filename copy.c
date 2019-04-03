//copy file contents

#include<stdio.h>

void main(){
	FILE *fp1, *fp2;
	char ch;
	
	fp1 = fopen("text1", "w");
	
	printf("Enter content into new file: \n");
	
	while((ch = getchar()) != EOF)
		putc(ch, fp1);
	fclose(fp1);
	
	fp1 = fopen("text1", "r");	
	fp2 = fopen("text2", "w");
	
	printf("\nCopying!!\n");
	while((ch = getc(fp1)) != EOF){
		printf("%c", ch);
		putc(ch, fp2);
	}	
	fclose(fp1);
	fclose(fp2);
	
	printf("\nContents of copied file: \n");
	
	fp2 = fopen("text2", "r");
	
	while((ch = getc(fp2)) != EOF)
		printf("%c", ch);
	
	fclose(fp2);
	printf("\n");
}
