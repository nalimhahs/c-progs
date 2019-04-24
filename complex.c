#include<stdio.h>

typedef struct{
	float real, img;
}cnum;

cnum read(){

	cnum a;
	
	printf("Enter real part: ");
	scanf("%f", &a.real);
	printf("Enter imaginary part: ");
	scanf("%f", &a.img);
	
	return a;
}

void print(cnum a){
	printf("%f + (%f)i\n", a.real, a.img);
}

void add(cnum a, cnum b){
	cnum c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	
	printf("\nSum is: ");
	print(c);
}

void sub(cnum a, cnum b){
	cnum c;
	c.real = a.real - b.real;
	c.img = a.img - b.img;
	
	printf("\nDifference is: ");
	print(c);
}

void mult(cnum a, cnum b){
	cnum c;
	c.real = a.real*b.real - a.img*b.img;
	c.img = a.real*b.img + a.img*b.real;
	
	printf("\nProduct is: ");
	print(c);
}

void div(cnum p, cnum q){
	cnum r;
	float a, b, c, d;
	a = p.real;
	b = p.img;
	c = q.real;
	d = q.img;
	r.real = (b*c - a*d)/(c*c + d*d);
	r.img = (a*c + b*d)/(c*c + d*d);
	
	printf("\nQuotient is: ");
	print(r);
}

void main(){
	cnum a, b;
	
	a = read();
	b = read();
	
	add(a, b);
	sub(a, b);
	mult(a, b);
	div(a, b);
}
