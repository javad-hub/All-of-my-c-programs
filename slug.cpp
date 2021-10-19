#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()  {
	int i=0,j;
	char *s;
	s=(char*)malloc(100);
	if(!(s=(char*)malloc(100))){
		printf("Allocation Error!");
		exit(1);
	}
	printf("Enter your string:");
	gets(s);
	do{
		if(*(s+i)==32)
		*(s+i)='-';
		}while(i++<=strlen(s));
	puts(s);
	free(s);
	getch();
	return 0;
}
