#include<stdio.h>
#include<conio.h>
struct poly_statement {
	int power, multi;
};
int p;
int main()  {
	int n, i, j, g;
	struct poly_statement x[10], y[10], upshot[20]={0};
	do{
		printf("Enter the number of statements (1-10):");
		scanf("%d",&n);
	}while(n<1||n>10);
	printf("\n\nElements of first statement:");
	for(i=0;i<n;i++){
		printf("\nEnter multiplication of statement %d:",i+1);
		scanf("%d",&x[i].multi);
		printf("\nEnter the power of statement %i:",i+1);
		scanf("%d",&x[i].power);
	}
	printf("\n\nElements of second statement:");
	for(i=0;i<n;i++){
		printf("\nEnter multiplication of statement %i:",i+1);
		scanf("%i",&y[i].multi);
		printf("\nEnter the power of statement %d:",i+1);
		scanf("%d",&y[i].power);
	}
	for(i=0;i<n;i++){
		g=0;
		for(j=0;j<p;j++)
			if(x[i].power==upshot[i].power){
				g=1;
				break;
			}
		if(g)
		upshot[j].multi+=x[i].multi;
		else{
			upshot[p].multi=x[i].multi;
			upshot[p++].power=x[i].power;
		}
	}
	for(i=0;i<n;i++){
		g=0;
		for(j=0;j<p;j++)
		if(y[i].power==upshot[j].power){
			g=1;
			break;
		}
		if(g)
		upshot[j].multi+=y[i].multi;
		else{
			upshot[p].multi+=y[i].multi;
			upshot[p++].power=y[i].power;
		}
	}
	printf("\n\n\n==>The upshot is:");
	for(i=0;i<n*2;i++){
		if(!upshot[i].multi)
		continue;
		if(upshot[i].multi>0&&i)
		printf("+");
		if(upshot[i].multi==-1)
		printf("-");
		else if(upshot[i].multi!=1||!upshot[i].power)
		printf("%i",upshot[i].multi);
		if(upshot[i].power){
			printf("x");
			if(upshot[i].power!=1)
			printf("^%d",upshot[i].power);
		}
	}
	getch();
	return 0;
}
