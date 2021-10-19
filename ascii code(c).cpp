#include<stdio.h>
#include<conio.h>
int  main() {
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	printf("\nThe ascii code of this character is=%d",int(ch));
	getch();
	return 0;
}
