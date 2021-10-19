#include<stdio.h>
#include<conio.h>
int  main() {
	float weight;
	float height;
    float total;
	printf("Enter your height and weight:");
	scanf("%f%f",&weight,&height);
	total=weight/(height*height);
	if(total<=18.5) {
	printf("\nYou are under weight!"); }
	if(total>=18.5 && total<=24.9 ) {
	printf("\nYou are normal!");}
	if(total>=25 && total<=29.9) {
	printf("\nYou are over weight!"); }
	if(total>=30 && total<=34.9) {
	printf("\nYou are fat!"); }
	if(total>=35 && total<=39.9) {
	printf("\nYou are extermly fat!"); }
	if(total>=40) {
	printf("\nYou are obese!"); }
	getch();
	return 0;
}
