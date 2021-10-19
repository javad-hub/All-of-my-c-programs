#include<stdio.h>
#include<conio.h>
int  main() {
	int x;
	printf("Enter your numbers:");
	scanf("%d",&x);
	while((x%2!=0 && x>0) && (x>=5 && x<=100)) {
		printf(" %d",x);
		printf("\nEnter another number:");
		scanf("%d",&x);
	}
	printf("\nYou broken the terms!");
	getch();
	return 0;
}
