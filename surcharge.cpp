#include<stdio.h>
int main()
{
	int customerID;
	char customerName;
	int unitconsumed;
	float chargesperunit;
	float surcharge;
	float totalbill;
	float totalamounttopay;
	
	//confirm customerID
	printf("enter customerID:");
	scanf("%d", &customerID);
	//confirm customerName: ");
	printf("enter customerName: ");
	scanf("%s", &customerName);
	//confirm unitconsumed
	printf("enter unitConsumed: ");
	scanf("%d", &unitconsumed);
	
	//calculate unitconsumed
 
	if (unitconsumed<=199){  
		chargesperunit=1.20;
	}else if
	(unitconsumed<=400){
		chargesperunit=1.50;
	}else if
	(unitconsumed<=600){
		chargesperunit=1.80;
	}else if
		(unitconsumed>=600){
			(chargesperunit = 2.00);
			
		}
		totalbill = (chargesperunit*unitconsumed);
		printf("totabill: %f \n",totalbill);
		
		if(totalbill>400 &&totalbill<100){
			(surcharge=15/100);
		}
			surcharge=(totalbill * 15/100);
		
		
		
		totalamounttopay =totalbill + surcharge;
		
		printf("total amount to pay:%f\n",totalamounttopay);
		


	
	return 0;
}
	
	
	
		
		
		
		
 
