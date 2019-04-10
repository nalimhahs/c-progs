#include<stdio.h>


int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; i++) {
      int count = 0;
      
      for (j = 0; j < n; j++) {
         if (a[j] == a[i])
         	count++;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

float median(int a[], int n){
	int i, j, pos, small, temp;
	
	for(i = 0; i < n-1; i++){
		small = a[i];
		pos = i;
		for (j = i; j < n; j++) {
			if(a[i] > a[j]){
				small = a[j];
				pos = j;
			}
			temp = a[i];
			a[i] = a[pos];
			a[pos] = temp; 
		}
	}
	
	if(n%2==0){
		return (float)a[n/2];
	}
	else {
		return (a[(n-1)/2] + a[(n+1)/2])/2.0;
	}
	
	
}


void main(){
	int nos[100], i, n;
	
	printf("Enter no of numbers: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &nos[i]);
	}
	
	printf("\nMode is %d.\n", mode(nos, n));
	printf("\nMedian is %f.\n", median(nos, n));	
	
}
