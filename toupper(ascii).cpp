#include<stdio.h>
#include<conio.h>
int  main() {
	char ch;
	for(ch='a';ch<='z';ch++){
		printf("%c:%c\t",ch,(char)((int)ch-32));
	}
	getch();
	return 0;
}
