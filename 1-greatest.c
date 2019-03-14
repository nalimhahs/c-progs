/*
Q: WAP to find greatest among 3 nos
Q: Factorial
Q: Sum of digits and reverse it (341 -> 143)
*/

#include<stdio.h>

main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a > b){
		if(a > c){
			printf("%d is the largest number", a);
		}
		else{
			printf("%d is the largest number", c);
		}
	}
	else{
		if(b > c){
			printf("%d is the largest number", b);
		}
		else{
			printf("%d is the largest number", c);
		}
	}
}
