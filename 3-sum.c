/*
Q: WAP to find greatest among 3 nos
Q: Factorial
Q: Sum of digits and reverse it (341 -> 143)
*/

#include<stdio.h>

main(){
	int n, sum = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Reverse of %d is: ", n);
	while(n > 0){
		printf("%d", n%10);
		sum += n%10;
		n /= 10;
	}
	printf("\nSum of digits are: %d\n", sum);
}
