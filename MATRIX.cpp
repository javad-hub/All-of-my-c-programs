#include<stdio.h>
#include<conio.h>
int  main() {
	int i, j, x[i][j];
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++)
		if(i==3 && j==3)
		printf("%d",7);
		else if(i==2 && j==2)
		printf("%d\t",3);
		else if(i==0 && j==0)
		printf("%d\t",-5);
		else
		printf("%d\t",0);
		printf("\n");
	}
	getch();
	return 0;
}
