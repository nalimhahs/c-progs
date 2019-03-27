#include<stdio.h>

void main(){

	int a[100][100], b[100][100], c[100][100], m, n, p, q, i, j, k, ch;
	char cont;
	while(1){
		
		printf("\nMenu\n1.Find product of matrix\n2.Find sum of matrix\n3.Find transpose of matrix\nEnter Choice: ");
		scanf("%d", &ch);
		
		switch(ch){
		
			case 1: 
				printf("Enter number of rows and columns of first matrix: ");
				scanf("%d%d", &m, &n);
				printf("Enter elements: \n");				
				for(i = 0; i < m; i++)
					for(j = 0; j < n; j++)
						scanf("%d", &a[i][j]);
					
				printf("Enter number of rows and columns of second matrix: ");
				scanf("%d%d", &p, &q);
				if(n != p){
					printf("\n\nMatrix cannot be multiplied!!\n\n"); 
					break;
				}
				printf("Enter elements: \n");								
				for(i = 0; i < p; i++)
					for(j = 0; j < q; j++)
						scanf("%d", &b[i][j]);
			
				for(i = 0; i < m; i++)
					for(j = 0; j < q; j++){
						c[i][j] = 0;
						for(k = 0; k < n; k++)
							c[i][j] += a[i][k]*b[k][j];
					}
				
				printf("Multiplied matrix is: ");
				for(i = 0; i < m; i++){
					printf("\n");
					for(j = 0; j < q; j++)
						printf("%d ", c[i][j]);		
				}	
					
				break;
				
			case 2:	
			
				printf("Enter number of rows and columns of first matrix: ");
				scanf("%d%d", &m, &n);
				printf("Enter elements: \n");				
				for(i = 0; i < m; i++)
					for(j = 0; j < n; j++)
						scanf("%d", &a[i][j]);
					
				printf("Enter number of rows and columns of second matrix: ");
				scanf("%d%d", &p, &q);
				
				if(m != p && n != q){
					printf("\n\nMatrix cannot be added!!\n\n"); 
					break;
				}
					
				printf("Enter elements: \n");								
				for(i = 0; i < p; i++)
					for(j = 0; j < q; j++)
						scanf("%d", &b[i][j]);
						
				
				for(i = 0; i < m; i++)
					for(j = 0; j < n; j++)
						c[i][j] = a[i][j] + b[i][j];
					
				
				printf("Sum matrix is: ");
				for(i = 0; i < m; i++){
					printf("\n");
					for(j = 0; j < q; j++)
						printf("%d ", c[i][j]);		
				}			
				
				break;
			
			case 3: 
				
				printf("Enter number of rows and columns of matrix: ");
				scanf("%d%d",&m,&n);
				printf("Enter elements: \n");				
				for(i=0;i<m;i++)
					for(j=0;j<n;j++)
						scanf("%d",&a[i][j]);

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
				break;
		
			default: printf("Invalid choice!\n");
		}
		
		printf("\nDo you want to continue? (y/n): ");
		scanf("%s", &cont);
		if(cont == 'y'){
			continue;
		}
		else{
			break;
		}
	
	}
		
}
