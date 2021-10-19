#include<stdio.h>
#include<conio.h>
int  main() {
	int a;
	printf("Enter the number of month:");
	scanf("%d",&a);
	if(a>=1 && a<=6) {
		printf("\nThis month has 31 days");
	}
	if(a>=7 && a<=11) {
		printf("\nThis month has 30 days");
	}
	if(a==12) {
	 printf("\nThis month has 29 days");
}
getch();
return 0;
}
