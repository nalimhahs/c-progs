#include<stdio.h>

void main(){

	int n, a[50], i, j, small, temp, pos;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter %d element: ", i);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n-1; i++){
		small = a[i];
		pos = i;
		for(j = i+1; j < n; j++){
			if(small > a[j]){
				small = a[j];	
				pos = j;		
			}
		}
		temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;
		
	}
	
	for(i = 0; i < n; i++){
		printf("%d ,", a[i]);
	}
	printf("\b\n");
}
