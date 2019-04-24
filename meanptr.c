#include <stdio.h>

void main(){
	int n, a[10], sum=0, i;
	printf("Enter no of elements: ");
	scanf("%d", &n);
	printf("Enter elements: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n; i++){
		sum += *(a + i);
	}
	
	printf("Mean is: %f\n", (((float)sum)/(float)n));
}
