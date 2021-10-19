#include<stdio.h>
#include<conio.h>
int  main() {
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch==33) 
	printf("\nYou have pressed Page Up so \"UP\"");
	else if(ch==34)
	printf("\nYou have pressed Page Down so \"DOWN\"");
	else if(ch==10)
	printf("\nYou have pressed Enter so \"RETURN\"");
	else if(ch==27)
	printf("\nYou have pressed Esc so \"EXIT\"");
	else
	printf("\nYou have pressed \"%c\"",ch);
	getch();
	return 0;
}
