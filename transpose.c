#include<stdio.h>

void main(){

	int a[100][100],b[100][100],m,n,i,j;
	
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<m;j++){
			printf("%d",b[i][j]);
		}
	}
	
}

