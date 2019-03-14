#include<stdio.h>

void main(){
	int p = 1, q = 0 , n, i; 
	printf("Enter the limit: ");
	scanf("%d", &n);
	printf("Fibonocci series is: \n");
	for(i = 0; i < n; i++){
		printf("%d\n", q);
		q = q + p;
		p = q - p;
	}
}
