#include<stdio.h>

void main(){

	int p, x, i, j, ch, mult, prev = 1, q = 1;
	float sum, fac, pow;
	char c;
	while(1){
		
		printf("\nMenu\n1.Find sum of series '1 - x^2/2! + x^4/4! ...'\n2.Find sum of series '1 - x^1/1! + x^2/2! ...(fibonocci)'\nEnter Choice: ");
		scanf("%d", &ch);
		
		
		switch(ch){
			case 1: 
					printf("Enter max power: ");
					scanf("%d", &p);
					printf("Enter value of x: ");
					scanf("%d", &x);
					sum = 0;
					for(i = 2; i <= p; i+=2){
						fac = i;
						pow = x;
						mult = -1;
						for(j = 1; j < i; j++){
							fac*=j;
							pow*=x;
							if(j<i/2){
								mult*=-1;
							}
						}
						sum += mult*pow/fac;
					}
					printf("Sum is : %f", sum+1);
					break;
			case 2:	prev = 1, q = 1;
					printf("Enter max terms: ");
					scanf("%d", &p);
					printf("Enter value of x: ");
					scanf("%d", &x);
					sum = 0;
					mult = 1;
					for(i = 0; i < p-1; i++){
						fac = q;
						pow = x;
						mult *= -1;
						//printf(" [(%d)*%f/%f] ", mult, pow, fac);
						for(j = 1; j < q; j++){
							fac*=j;
							pow*=x;
						}
						//printf(" ((%d)*%f/%f) ", mult, pow, fac);
						//printf(" (%d, %d) ", q, prev);
						sum += mult*pow/fac;
						q = q + prev;
						prev = q - prev;
					}
					printf("Sum is : %f", sum+1);
					break;
			default: printf("Invalid choice!\n");
		}
		
		printf("\nDo you want to continue? (y/n): ");
		scanf("%s", &c);
		if(c=='y'){
			continue;
		}
		else{
			break;
		}
	
	}
	
}
