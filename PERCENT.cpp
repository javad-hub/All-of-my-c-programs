#include<stdio.h>
#include<conio.h>
int  main() {
	int x, y, z, k, t;
	printf("Enter the number of people who have doctoral degree:");
	scanf("%d",&x);
	printf("\tTotal percent of doctoral degree=%d",x*100/630);
	printf("\nEnter the number of people who have postgraduate degree:");
	scanf("%d",&y);
	printf("\tTotal percent of postgraduate degree=%d",y*100/630);
	printf("\nEnter the number of people who have bachelor degree:");
	scanf("%d",&z);
	printf("\tTotal percent of bachelor degree=%d",z*100/630);
	printf("\nEnter the number of people who have postdiploma degree:");
	scanf("%d",&k);
	printf("\tTotal percent of postdiploma=%d",k*100/630);
	printf("\nEnter the number of people who have diploma degree:");
	scanf("%d",&t);
	printf("\tTotal percent of diploma degree=%d",t*100/630);
	getch();
	return 0;
}

