#include<stdio.h>
#include<conio.h>
int  main() {
	int i;
	float x, y, upshot;
	x=4;
	y=1;
	for(i=0;i<=5;i++){
		if(i%2==0){
			printf("%f%f",x,y);
			upshot+=x/y;
			y+=2;
		}
		else{
			printf("%f%f",x,y);
			upshot-=x/y;
			y+=2;
		}
	}
	printf("\nUpshot of the question is=%f",upshot);
	getch();
	return 0;
}
