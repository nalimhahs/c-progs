#include <stdio.h>

typedef struct{
	int book_id;
	char title[20], author[20];
}book;

void main(){
	book bk;
	
	printf("Enter book id: ");
	scanf("%d", &bk.book_id);
	
	printf("Enter book title: ");
	//fseek(stdin,0,SEEK_END);
	//fgets(bk.author, 20, stdin);
	scanf("%s", &bk.title);
	
	printf("Enter book author: ");
	//fseek(stdin,0,SEEK_END);
	scanf("%s", &bk.author);
	//fgets(bk.author, 20, stdin);
	
	printf("\nBook\nID: %d\nTitle: %s\nAuthor: %s\n", bk.book_id, bk.title, bk.author);
}
