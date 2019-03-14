/*
get 2 nos
reverse them 
add
print result
*/

#include<stdio.h>

main(){
	int n, m, p = 0, q = 0;
	printf("Enter the numbers: ");
	scanf("%d%d", &m, &n);
	while(m > 0){
		p = p*10 + m%10;
		m /= 10;
	}
	while(n > 0){
		q = q*10 + n%10;
		n /= 10;
	}
	
	printf("Sum is: %d\n", p+q);
}
