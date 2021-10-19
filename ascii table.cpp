#include<stdio.h>
#include<conio.h>
int  main() {
	int i, n;
	for(i=1;i<=127;i++){
		printf("%d:%c\t",i,(char)i);
	}
	getch();
	return 0;
}
