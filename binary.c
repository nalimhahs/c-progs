#include<stdio.h>

void main(){
	
	int n, a[50], i, j, b, t, m, temp, el, flag = 0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter %d element: ", i);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;				
			}
		}
	}
	
	printf("Enter element to search: ");
	scanf("%d", &el);
	
	b = 0;
	t = n-1;	
	
	while(b <= t){
		
		m = (b + t)/2;
		
		if(a[m] == el){
			printf("Found %d at position %d\n", el, m);
			flag = 1;
			break;
		}
		else if(a[m] < el){
			b = m + 1;
		}
		else{
			t = m - 1;
		}
		
	}
	
	if(flag == 0){
		printf("Element not found!\n");
	}
	
}
