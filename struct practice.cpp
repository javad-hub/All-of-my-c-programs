#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct Client{
	char *name;
	int *zip_code;
};
char show_name(char *name);
int show_zip(int *zip_code);
int main()  {
	struct Client obj;
	char *n;
	int *z;
	n =(char*) malloc(100);
	z =(int*) malloc(18);
	if(!n){
		printf("\nAllocation Error!");
		exit(1);
	}
	if(!z){
		printf("\nAllocation Error!");
		exit(1);
	}
	printf("Enter your full name:");
	gets(n);
	printf("\nEnter your ZIP code:\n");
	scanf("%s",z);
	show_name(n);
	show_zip(z);
	free(n);
	free(z);
	getch();
	return 0;
}
char show_name(char *name){
	puts(name);
}

int show_zip(int *zip_code){
	printf("\n%s",zip_code);
}

