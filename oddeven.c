//write odd and even numbers to seperate files

#include<stdio.h>

void main(){
	FILE *fp1, *fp2, *fp3;
	int ch;
	
	//fp1 = fopen("nos", "w");
	
	//printf("Enter content into new file: \n");
	
	/*while((ch = getchar()) != EOF)
		putc(ch, fp1);
	fclose(fp1);
	*/
	fp1 = fopen("nos", "r");	
	fp2 = fopen("odd", "w");
	fp3 = fopen("even", "w");
	
	printf("\nCopying!!\n");
	while((ch = getw(fp1)) != EOF){
		if(ch % 2 == 0)
			putw(ch, fp2);
		else
			putw(ch, fp3);			
	}	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
		
	printf("\nContents of odd file: \n");
	
	fp2 = fopen("odd", "r");
	
	while((ch = getw(fp2)) != EOF)
		printf("%s", ch);
	
	fclose(fp2);
	printf("\n");
	
	printf("\nContents of even file: \n");
	
	fp2 = fopen("even", "r");
	
	while((ch = getw(fp2)) != EOF)
		printf("%s", ch);
	
	fclose(fp2);
	printf("\n");
}
