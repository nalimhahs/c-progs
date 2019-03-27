#include<stdio.h>

void main(){
	int a, b, *ptr1, *ptr2, *ptr3;
	printf("Enter 2 nos: ");
	scanf("%d%d", &a, &b);
	
	ptr1 = &a;
	ptr2 = &b;
	
	*ptr3 = *ptr1;
	*ptr1 = *ptr2;	
	*ptr2 = *ptr3;	
		
	printf("New values are: %d, %d", a, b);
}
