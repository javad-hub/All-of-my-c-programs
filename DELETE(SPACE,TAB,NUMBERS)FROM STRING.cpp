#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int n;
int  main() {
	char *str;
	int i;
	str=(char*)malloc(100);
	printf("Enter your desirable string:");
	gets(str);
	do{
		if((*(str+n)>='0' && *(str+n)<='9'|| *(str+n)==9 || *(str+n)==32)){
			i=n--;
			while(i<strlen(str))
			*(str+i++)=*(str+i+1);
		}
	}while(++n<strlen(str));
	printf("\n %s",str);
	free(str);
	getch();
	return 0;
}
