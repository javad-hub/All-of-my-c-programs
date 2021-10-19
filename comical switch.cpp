#include<stdio.h>
#include<conio.h>
int  main() {
	int x;
	printf("Enter your age:");
	scanf("%d",&x);
	switch(x) {
		case 1:printf("\nYou are too young!");break;
		case 2:printf("\nYou are a bit older!");break;
		case 19:printf("\nYou are an adult!");break;
		case 40:printf("\nYou are a middleaged man!");break;
		case 70:printf("\nYou are a elder person!");break;
		case 100:printf("\nYou are about to die!");break;
	}
	getch();
	return 0;
}
