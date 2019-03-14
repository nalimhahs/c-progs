#include<stdio.h>
#include<math.h>

void main(){
	float a, b, c, d, q;
	printf("Enter the 3 coefficents: ");
	scanf("%f%f%f", &a, &b, &c);
	d = b*b - 4*a*c;
	if(a ==0){
		printf("Coefficent of x^2 cannot be zero!\n");
	}
	else if(d == 0){
		printf("Equal roots and roots are: %f\n", -b/(2*a));
	}
	else if(d > 0){
		printf("Unequal roots and roots are: %f , %f\n", (-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a));
	}
	else if(d < 0){
		q = -b/(2*a);
		printf("Unequal complex roots and roots are: %f + i(%f), %f - i(%f)\n", q, (sqrt(-d))/(2*a), q, (sqrt(-d))/(2*a));
	}
	else{
		printf("Invalid input!\n");
	}	
}

