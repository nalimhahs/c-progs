#include <stdio.h>

int sum(int n){
	if(n <= 0){
		return 0;
	}
	else{
		return (n + sum(n-1));
	}
}

void main(){
    int n;
	printf("Enter limit: ");
	scanf("%d", &n);
	printf("Sum is: %d\n", sum(n));
}
