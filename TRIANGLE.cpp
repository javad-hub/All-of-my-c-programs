#include<stdio.h>
#include<conio.h>
int  main() {
	int i, j, z;
	for(i=1;i<=10;i++){
		for(z=1;z<30-3*i;z++)
		printf("");
		for(j=1;j<2*i;j++)
		printf("%3d",i);
		printf("\n"); }
	getch();
	return 0;
}
