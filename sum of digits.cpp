#include<stdio.h>
#include<conio.h>
int  main() {
	long int i, x, m=0;
	printf("Enter a natural number:");
	scanf("%d",&x);
	for(i=0;x>0;i++){
		m+=x%10;
		x/=10;
}
	printf("\nSum of digits is=%d",m);
	getch();
	return 0;
}
