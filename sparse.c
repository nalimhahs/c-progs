//check if a matrix is sparse

#include<stdio.h>

void main(){

	int a[100][100], m, n, i, j, k = 0;
	
	printf("Enter number of rows and columns of matrix: ");
	scanf("%d%d", &m, &n);
	printf("Enter elements: \n");				
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			if(a[i][j] == 0)
				k++;
	
	if(k > ((m*n)/2))
		printf("\nMatrix is a sparse matrix\n");
	else
		printf("\nMatrix is not a sparse matrix\n");

}
