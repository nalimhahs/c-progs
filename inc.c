#include<stdio.h>

void main(){
	int x = 2, z = 4;
	int y = x++ + ++x;
	printf("X = %d, Y = %d, Z = %d\n", x, y, z);
	y = ++x + ++x;
	printf("X = %d, Y = %d, Z = %d\n", x, y, z);
	y = ++x + ++x + ++x;
	printf("X = %d, Y = %d, Z = %d\n", x, y, z);
	y = x>z?x:2;
	printf("X = %d, Y = %d, Z = %d\n", x, y, z);
	y = x>>z + z<<1;
	printf("X = %d, Y = %d, Z = %d\n", x, y, z);
}
