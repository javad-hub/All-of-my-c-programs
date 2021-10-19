#include<stdio.h>
#include<conio.h>
int  main() {
	int n, x[8], i, c;
	printf("Enter a decimal number:");
	scanf("%d",&n);
	while(n>1){
		for(i=0;i<=8;i++){
		x[i]=n%2;
		n/=2;}
	}
	printf("\nThe number in binary order is=%d%d%d%d%d%d%d%d",x[7],x[6],x[5],x[4],x[3],x[2],x[1],x[0]);
	getch();
	return 0;
}
