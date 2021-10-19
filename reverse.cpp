#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int  main() {
	char *ch;
	int i, x;
	ch=(char*)malloc(100);
	if(!(ch=(char*)malloc(100))){
		printf("Allocation Error!");
		exit(0);
	}
	printf("Enter a string:");
	gets(ch);
	x=*ch;
	while(x>i--){
		
		puts(ch);
	}
	free(ch);
	getch();
	return 0;
}
