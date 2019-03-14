#include<stdio.h>

void main(){
	int j, n, i, flag; 
	printf("Enter the limit: ");
	scanf("%d", &n);
	printf("Prime numbers in series are: \n");
	for(i = 0; i < n; i++){
		flag = 0;
		for(j = 1; j < i+1; j++){
			if(i%j == 0){
				flag+=1;
			}
		}
		if(flag == 2){
			printf("%d\n", i);
		}
	}
}
