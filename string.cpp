#include<stdio.h>
#include<conio.h>
int  main() {
	char name[15],lastname[20];
	printf("Enter your name:");
	scanf("%s%s",name,lastname);
	printf("\n Welcome\t%s\t%s",name,lastname);
	getch();
	return 0;
}
