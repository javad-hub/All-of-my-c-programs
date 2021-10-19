#include<stdio.h>
#include<conio.h>
int  main() {
    int a, b ,c;
	float d, e, f;
	float DELTA;
	float ROOT1, ROOT2;
	printf("Enter the factors of a second degree equation:");
	scanf("%d%d%d",&a, &b, &c);
	d=a*c;
	DELTA=b*b-(4*d);
	e=DELTA/DELTA;
	f=2*a;
	ROOT1=(-b+e)/f;
	ROOT2=(-b-e)/f;
	if(DELTA>0) {
	    printf("\nThe roots are=%.3f \t %.3f",ROOT1, ROOT2); }
	if(DELTA==0) {
		printf("\nThe multiple root is=%.3f",-b/f); }
	if(DELTA<0) {
		printf("\nThe equation has no roots!"); }
	getch();
	return 0;
}
