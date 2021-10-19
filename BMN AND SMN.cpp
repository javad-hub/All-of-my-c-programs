#include<stdio.h>
#include<conio.h>
int  main() {
	int i, x1, x2, smn, bmn;
	printf("Enter two numbers:");
	scanf("%d%d",&x1,&x2);
	for(i=x1;i>=1;i--)
		if((x1%i==0) && (x2%i==0)){
		bmn=i;break;}
	smn=(x1*x2)/bmn;
	printf("\nbmn=%d  smn=%d",bmn,smn);
	getch();
	return 0;
}
