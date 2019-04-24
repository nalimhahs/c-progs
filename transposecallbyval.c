#include<stdio.h>

void transpose(int a[12][12], int m, int n){
	
	int i, j, b[12][12];

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			b[j][i]=a[i][j];
			
	printf("Transpose matrix is: ");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
	}
}

void main(){

	int a[12][12], b[12][12], m, n, i, j;
	
	printf("Enter number of rows and columns of matrix: ");
	scanf("%d%d",&m,&n);
	
	printf("Enter elements: \n");				
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	transpose(a, m, n);
	
}
