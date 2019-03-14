#include<stdio.h>

void main(){
	
	int n, a[50], i, el, flag = 0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter %d element: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Enter element to search: ");
	scanf("%d", &el);
	
	for(i = 0; i < n; i++){
		if(a[i] == el){
			printf("Found %d at position %d\n", el, i);
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("Element not found!\n");
	}
	
}
