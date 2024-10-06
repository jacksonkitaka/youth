 #include<stdio.h>
int main(){
	int bookID;
	int duedate;
	int returndate;
	float daysoverdue;
	float finerate;
	float fineamount;
	//confirm the bookID
	printf("enter the bookID: ");
	scanf("%d", &bookID);
	//confirm the due date
	printf("enter due date: ");
	scanf("%d", &duedate);
	//confirm the return date
	printf("enter the return date: ");
	scanf("%d", &returndate);

	
	//calculate daysoverdue
	daysoverdue = (returndate - duedate);
	
	printf("daysoverdue: %f \n",daysoverdue);
	if(daysoverdue<=7){
		finerate=140;
	}else if
		(daysoverdue<=14){
			finerate=700; 
		}else if
		(daysoverdue>=15){
			finerate =1500;
			}
			
		fineamount=(daysoverdue*finerate);
		
		printf("BookID: %d \n",bookID );
		printf("duedate: %d \n",duedate);;
		printf("returndate: %d \n",returndate);
		printf("daysoverdue: %.2f \n",daysoverdue);
		printf("finerate: %.2f \n",finerate);
		printf("fineamount: %.4f \n",fineamount);
return 0;
}
