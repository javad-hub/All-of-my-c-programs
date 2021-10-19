#include<stdio.h>
#include<conio.h>
#include<string.h>
char F(char *s,char ch);
int main() {
	char s[256], c;
	printf("Enter a string:");
	gets(s);
	printf("\nWhat character do you want set instead of the string:");
	scanf("%c",&c);
	F(s,c);
	printf("\nThe result after setting is \"%s\"",s);
	getch();
	return 0;
}
char F(char *s, char ch){
	while(*s!='\0')
	*s++=ch;
	return *s;
}
