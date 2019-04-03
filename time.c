#include<stdio.h>

void main(){

	int h = 0, m = 0, s = 0, t;
	
	printf("Enter Time in Seconds: ");
	scanf("%d", &t);
	
	h = t/3600;
	m = t/60 - h*60;
	s = t - h*3600 - m*60;
	
	printf("Time is %d Hours, %d Minutes and %d Seconds\n", h, m, s);	
		
	
}
