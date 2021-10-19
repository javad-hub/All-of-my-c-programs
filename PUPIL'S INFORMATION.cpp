#include<iostream>
#include<conio.h>
#include<string.h>
using namespace::std;
class Student {
	private:
		int number;
		char firstname[30], lastname[45];
		char ID[14];
		float *result;
	public:
		Student(){number = 5;}
		float average(float x1);
		void information(char fname[], char lname[], char id[]);
		void display();
};
float Student :: average(float x1){
	float ave ,sum;
	for(int i=0;i<number;i++){
		cout<<"\nEnter pupil's mark"<<i+1<<':';
		cin>>x1;
		sum+=x1;
	}
	ave=sum/number;
	result=&ave;
}
void Student :: information(char fname[], char lname[], char id[]){
	cout<<"Enter pupil's fisrtname:";
	cin>>fname;
	cout<<"\nEnter pupil's lastname:";
	cin>>lname;
	cout<<"\nEnter pupil's ID:";
	cin>>id;
	strcpy(firstname,fname);
	strcpy(lastname,lname);
	strcpy(ID,id);
}
void Student :: display(){
	cout<<"Firstname:"<<firstname<<"----------"<<"Lastname:"<<lastname<<"----------"<<"Pupil's ID:"<<ID<<"---------"<<"Average of marks:";
	cout<<*result;
}
main()  {
	char fname[30], lname[45];
	char id[14];
	float x1;
	Student data;
	data.information(fname,lname,id);
	data.average(x1);
	data.display();
	getch();
	return 0;
}
