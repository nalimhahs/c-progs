/*
Find simple interest using macros
*/

#include<stdio.h>

#define CALC(P, R, T) P*R*T/100

void main(){
	int p, r, t;
	printf("Enter Principal: ");
	scanf("%d", &p);
	printf("Enter rate: ");
	scanf("%d", &r);
	printf("Enter time: ");
	scanf("%d", &t);	
	printf("Interest is: %d\n", CALC(p,r,t));
}


