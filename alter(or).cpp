#include<stdio.h>
#include<conio.h>
int  main() {
	char ch;
	printf("Enter a capital letter:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	printf("\nThe small letter of\"%c\" is \"%c\"",ch,ch|32);
	else
	printf("\nThe letter is not capital");
	getch();
	return 0;
}
