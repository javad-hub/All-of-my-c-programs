#include<stdio.h>
#include<conio.h>
int  main() {
	int i, x, y;
	for(i=100;i<=999;i++){
		y=i%10;
		if(i/100==y)
		printf("\n%d",i);
	}
	getch();
	return 0;
}
