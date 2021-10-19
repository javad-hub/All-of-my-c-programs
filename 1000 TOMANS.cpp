#include<stdio.h>
#include<conio.h>
int  main() {
	int cash500, cash50, cash100, cash200;
	for(cash500=0;cash500<=2;cash500++)
	for(cash200=0;cash200<=5;cash200++)
	for(cash100=0;cash100<=10;cash100++)
	for(cash50=0;cash50<=20;cash50++)
	if(cash500*500+cash200*200+cash100*100+cash50*50==1000)
	printf("\n%d*500 + %d*200 + %d*100 + %d*50=1000",cash500,cash200,cash100,cash50);
	getch();
	return 0;
}
