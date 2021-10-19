#include<stdio.h>
#include<conio.h>
int  main() {
	const long int salary=3000000;
	long int a, b, c, d;
	printf("Enter the salary of employees:");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	if(a<salary && a<b && a<c && a<d) {
		printf("\nWorker 1 has the least salary!");
	}
	else if(b<salary && b<a && b<c && b<d) {
		printf("\nWorker 2 has the least salary!");
	}
	else if(c<salary && c<a && c<b && c<d) {
		printf("\nWorker 3 has the least salary!");
	}
	else if(d<salary && d<a && d<b && d<c) {
		printf("\nWorker 4 has the least salary!");
	}
	{if(a>=salary && a>b && a>c && a>d) {
		printf("\tWorker 1 has the most salary!");
	}
	else if(b>=salary && b>a && b>c && b>d) {
		printf("\tWorker 2 has the most salary!");
	}
	else if(c>=salary && c>a && c>b && c>d) {
		printf("\tWorker 3 has the most salary!");
	}
	else if(d>=salary && d>a && d>b && d>c) {
		printf("\tWorker 4 has the most salary!");
	}
	}
	getch();
	return 0;
}
