#include<stdio.h>
#include<conio.h>
int  main() {
	int f=1, s=1, th=1, n, i;
	printf("Enter a number for n:");
	scanf("%d",&n);
	if(n>0)
	printf("%i",th);
	if(n>1)
	printf("\t%i",th);
	for(i=3;i<=n;i++){
		th=f+s;
		f=s;
		s=th;
		printf("\t%i",th);
	}//End of for
	getch();
	return 0;
}
