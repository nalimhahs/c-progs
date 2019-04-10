#include<stdio.h>

typedef struct{
	int id;
} student;

void main(){
	student test;
	
	scanf("%d", &test.id);
	
	printf("\n%d", test.id);

}
