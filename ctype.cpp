#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int  main() {
	char ch;
	printf("Enter the intended character in small:");
	scanf("%c",&ch);
	printf("\nThe uppercase of \"%c\" is \"%c\"",ch,toupper(ch));
	printf("\nEnter another character in capital:");
	ch=getche();
	printf("\nThe lowercase of \"%c\" is \"%c\"",ch,tolower(ch));
	getch();
	return 0;
}
