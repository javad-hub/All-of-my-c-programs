#include<stdio.h>
#include<conio.h>
int  main() {
	int i,j;
	for(i=1;i<=100;i++){
		printf("\n");
		  for(j=1;j<=i;j++){
		  	putchar('*');
		  }//End of internal for
	}//End of external for
	getch();
	return 0;
}
