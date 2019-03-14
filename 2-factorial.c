/*
Q: WAP to find greatest among 3 nos
Q: Factorial
Q: Sum of digits and reverse it (341 -> 143)
*/

#include<stdio.h>

main(){
	unsigned int n, fac, i;
	fac = 1;
	printf("Enter the number to find the factorial of: ");
	scanf("%d", &n);
	for(i =1; i <= n; i++){
		fac = fac*i;
	}
	printf("Factorial of %d is : %d\n", n, fac);
}
