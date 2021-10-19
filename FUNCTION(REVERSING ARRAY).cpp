#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int F(int a[], int L);
int main()  {
	int x[30], l, j;
	printf("Enter the array's length:");
	scanf("%d",&l);
	for(j=0;j<l;j++){
		printf("\nEnter number[%d]:",j+1);
		scanf("%i",&x[j]);
	}
	F(x,l);
	getch();
	return 0;
}
int F(int a[], int L){
	int i;
	for(i=L-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
}
