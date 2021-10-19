#include<stdio.h>
#include<conio.h>
int  main() {
	int i;
	printf("Numbers one to a hundered is:");
	for(i=1;i<=9999;++i) {
		if(i%7==0 && i%13==0)
		printf("\nThis is it=%d",i);
	}
	getch();
	return 0;
}
