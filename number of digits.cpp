#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, x, n=0;
	i=0;
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=0;x>0;i++){
		x/=10;
	}
	printf("\nThe number has %d digit(s)",i);
	getch();
	return 0;
}
