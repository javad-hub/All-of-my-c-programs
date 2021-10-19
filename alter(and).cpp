#include<stdio.h>
#include<conio.h>
int  main() {
	char ch;
	printf("Enter a small letter:");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	printf("\nThe capital of \"%c\" is \"%c\"",ch,ch&(255-32));
	else
	printf("\nThe character is not a small letter");
	getch();
	return 0;
}
