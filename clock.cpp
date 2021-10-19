#include<stdio.h>
#include<conio.h>
#include<unistd.h>
int  main() {
	int h=0, m=0, s=0;
	for(;;){
		printf("%d:%d:%d\t",h,m,s);
		s++;
		if(s==60){
			s=0;
			m++;
		}
		if(m==60){
			m=0;
			h++;
		}
		if(h==24){
			s=0;
			m=0;
			h=0;
		continue;}
		sleep(1);
	}
	getch();
	return 0;
}


