#include<stdio.h>
#include<conio.h>
#include<unistd.h>
int  main() {
	int num=0, j, i=2354;
	char ch;
	do{
		i*=13;
		i/=4;
		i*=i;
		i/=10;
		printf("\t");
	printf("%ld",i);
	sleep(20);
	continue;
	}while(ch!='n'|'N');
	getch();
	return 0;
}
