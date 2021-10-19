#include<stdio.h>
#include<conio.h>
int  main() {
	char answer;
	long int x, y, z;
	printf("\nThink about a number between 1 and 1000000");
	x=1;
	y=1000000;
	z=(x+y)/2;
	do{printf("\nIs the number bigger than %ld? (Y\N)",z);
	scanf("%c",&answer);
	if(answer=='Y')
	x=z+1;
	else 
	y=z;
	z=(x+y)/2;
	}while(x<y);
	printf("\nThe number must be %ld",z);
	getch();
	return 0;
}
