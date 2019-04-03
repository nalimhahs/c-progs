#include<stdio.h>

void main(){

	enum day{sun = 1, mon, tue, wed, thur, fri, sat};
	int i;
	
	for(i = sun; i <= sat; i++)
		printf("%d ", i);

}
