#include<stdio.h>
#include<conio.h>
int  main() {
	int INTEGER;
	float FLOAT;
	char CHARACTER;
	double DOUBLE;
	printf("\nThe storage of INTEGER is=%i bytes",sizeof(INTEGER));
	printf("\nThe storage of FLOAT is=%i bytes",sizeof(FLOAT));
	printf("\nThe storage of CHARACTER is=%i bytes",sizeof(CHARACTER));
	printf("\nThe storage of DOUBLE is=%i bytes",sizeof(DOUBLE));
	printf("\nThe void type is 0 bytes.");
	getch();
	return 0;
}
