#include<stdio.h>

void main(){

	int i, m, n, a[100], b[100], c[100];
	
	printf("Enter no of numbers of first array: ");
	scanf("%d", &m);
	
	for(i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter no of numbers of second array: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	
	for(i = 0; i < m; i++){
		c[i] = a[i];
	}
	for(i = m; i < m+n; i++){
		c[i] = b[i-m];
	}
	
	printf("Merged array is:\n");
	for(i = 0; i < m+n; i++){
		printf("%d\n", c[i]);
	}
}


//printf("\nMenu\n1. Decimal to octal\n2. Decimal to hexadecimal\n3. Octal to decimal\n4.Hexadecimal to decimal\nEnter Choice: ");//scanf()
