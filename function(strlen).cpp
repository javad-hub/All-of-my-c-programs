#include<stdio.h>
#include<conio.h>
#include<string.h>
int F(char *s, int x);
int main() {
	char s[256];
	int n;
	printf("Enter a string:");
	gets(s);
	printf("\nThe string's length is %d",F(s,n));
	getch();
	return 0;
}
int F(char *s, int x){
	while(*s!='\0'){
	x++;}
	return x;
}
