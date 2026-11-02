#include<stdio.h>
int main(){
	int employee_id , training_completed , account_active;
	printf("Enter the employee ID validity: \n");
	scanf("%d",&employee_id);
		printf("Enter the employee completed security training?: \n");
	scanf("%d",&training_completed);
		printf("Enter the employee's account active?: \n");
	scanf("%d",&account_active);
	if(employee_id==1){
		printf("valid\n");
		}
	
		else 
		printf("invalid\n");


		if (training_completed==1){
			printf("completed\n");
			}
			else 
			
			printf("not completed\n");
		
		
		if(account_active==1){
			printf("active\n");
			}
			else 
			
			printf("inactive\n");
        return 0;
}
