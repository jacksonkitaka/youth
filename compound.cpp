#include<stdio.h>
int main(){
	int principle='p'//%d
;	int time='t'//%d
;    float rate='r'//%f
;	float compoundinterest='ci'//%f
;	printf("enter the priciple amount: ");
	scanf("%d", &principle);
	printf("enter the time: ");
	scanf("%d", &time);
	printf("enter the rate: ");
	scanf("%f", &rate);
	printf("enter the compoundinterest: ");
	scanf("%f", &compoundinterest);
	//calculate the compoundinterest
	compoundinterest=((1+rate/100)*time);
	printf("compoundinterest is %f/n");
	return 0;
}