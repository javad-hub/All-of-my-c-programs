#include<iostream>
#include<conio.h>
using namespace::std;
class Complex_Number{
	private:
		int *a, *b, x, y, z, q, f, g;
		float f1, g1, *a1, *b1;
	public:
		Complex_number(){x=y=z=q=f1=g1=*a=*b=0;}
		int sum(int x, int y, int z, int q);
		int sub(int x, int y, int z, int q);
		int multi(int x, int y, int z, int q);
		float devide(int x, int y, int z, int q);
		void get1(int &x1, int &y1);
		void get2(int &z1, int &q1);
		void display1();
		void display2();
		void display3();
		void display4();
};
int Complex_Number :: sum(int x, int y, int z, int q){
	f=x+z;
	g=y+q;
	a=&f;
	b=&g;
}
int Complex_Number :: sub(int x, int y, int z, int q){
	f=x-z;
	g=y-q;
	a=&f;
	b=&g;
}
int Complex_Number :: multi(int x, int y, int z, int q){
	f=(x*z)-(y*q);
	g=(x*q)+(y*z);
	a=&f;
	b=&g;
}
float Complex_Number :: devide(int x, int y, int z, int q){
	f1=(float)((x*z)+(y*q))/((z*z)+(q*q));
	g1=(float)((y*z)-(x*q))/((z*z)+(q*q));
	a1=&f1;
	b1=&g1;
}
void Complex_Number :: get1(int &x1, int &y1){
	cin>>x1>>y1;
	x=x1;
	y=y1;
}
void Complex_Number :: get2(int &z1, int &q1){
	cin>>z1>>q1;
	z=z1;
	q=q1;
}
void Complex_Number :: display1(){
	cout<<"\nSum of the complex numbers:"<<'('<<x<<'+'<<y<<'i'<<')'<<'+'<<'('<<z<<'+'<<q<<'i'<<')'<<'='<<'('<<*a<<'+'<<*b<<'i'<<')';
}
void Complex_Number :: display2(){
	cout<<"\n\nSubtraction of the complex numbers:"<<'('<<x<<'+'<<y<<'i'<<')'<<'-'<<'('<<z<<'+'<<q<<'i'<<')'<<'='<<'('<<*a<<'+'<<*b<<'i'<<')';
}
void Complex_Number :: display3(){
	cout<<"\n\nMultiple of the complex numbers:"<<'('<<x<<'+'<<y<<'i'<<')'<<'*'<<'('<<z<<'+'<<q<<'i'<<')'<<'='<<'('<<*a<<'+'<<*b<<'i'<<')';
}
void Complex_Number :: display4(){
	cout<<"\n\nDivision of the complex numbers:"<<'('<<x<<'+'<<y<<'i'<<')'<<'/'<<'('<<z<<'+'<<q<<'i'<<')'<<'='<<'('<<*a1<<'+'<<*b1<<'i'<<')';
}
main()  {
	int x, y, z, q;
	Complex_Number obj;
	cout<<"Enter first complex number(a,b):";
	obj.get1(x,y);
	cout<<"\nEnter second complex number(a1,b1):";
	obj.get2(z,q);
	obj.sum(x,y,z,q);
	obj.display1();
	obj.sub(x,y,z,q);
	obj.display2();
	obj.multi(x,y,z,q);
	obj.display3();
	obj.devide(x,y,z,q);
	obj.display4();
	getch();
	return 0;
}

