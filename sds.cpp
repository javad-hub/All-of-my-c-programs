#include<stdio.h>
#include<conio.h>
class Multiple{
	int x,y;
	public:
		int fun(int i, int j);
		void show();
};

int Multiple::fun(int i, int j){
	x=i;
	y=j;
}

void Multiple::show(){
	printf("X is %d",x);
	printf("\nY is %i",y);	
}
int  main() {
	int x, y;
	Multiple obj;
	obj.fun(12,20);
	obj.show();
	getch();
	return 0;
}
