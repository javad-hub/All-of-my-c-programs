#include<stdio.h>
#include<conio.h>
int  main() {
	int g=0, s=0, b=0, h=0, k=0,j=0,max=0,q=0, i;
	for(i=1369;i<=1373;i++){
		printf("How many GOLD-SILVER-BRONZE medals got in year %d?",i);
		printf("\n");
		scanf("%d%d%d",&g,&s,&b);
		h=g+s+b;
		q=h;
		if(q==0)
		q=max;
		q>max?q:max;
		k+=g;
		if((g && s && b)==0)
		j++;
	}
	printf("-----------------------------\n\nIn %i years no medals had won!",j);
	printf("\n%d Medals have taken between the years 1369-1390.",h);
	getch();
	return 0;
}
