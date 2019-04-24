#include<stdio.h>


void swap(int *ptr1, int *ptr2){

	int ptr3;
	printf("old values are: %d, %d", *ptr1, *ptr2);
	ptr3 = *ptr1;
	*ptr1 = *ptr2;	
	*ptr2 = ptr3;	
}

void main(){
	int a, b;
	printf("Enter 2 nos: ");
	scanf("%d%d", &a, &b);
	
	swap(&a, &b);

	printf("New values are: %d, %d", a, b);
}
