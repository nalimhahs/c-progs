//check if strictly upper triangle or not

#include<stdio.h>

void main(){

	int a[100][100], m, n, i, j, k = 0;
	
	printf("Enter side of square matrix: ");
	scanf("%d", &m);
	n = m;
	printf("Enter elements: \n");				
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			if((i >= j) && (a[i][j] != 0))
				k++;
	
	if(k == 0)
		printf("\nMatrix is a strictly upper triangular matrix\n");
	else
		printf("\nMatrix is not a strictly upper triangular matrix\n");

}
