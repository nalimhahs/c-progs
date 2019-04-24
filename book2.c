#include <stdio.h>

typedef struct{
	int book_id;
	char title[20], author[20];
}book;

void printer(book bk){
	printf("\nBook\nID: %d\nTitle: %s\nAuthor: %s\n", bk.book_id, bk.title, bk.author);	
}

void main(){
	book bk;

	printf("Enter book id: ");
	scanf("%d", &bk.book_id);
	
	printf("Enter book title: ");
	scanf("%s", &bk.title);
	
	printf("Enter book author: ");
	scanf("%s", &bk.author);

	printer(bk);

}
