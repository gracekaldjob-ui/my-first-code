#include<stdio.h>
int main() {
float units_consumed;
float total_bill = 0.0;
printf("enter the number of units consumed: \n");
scanf("%f",&units_consumed);
if(units_consumed < 0){
	printf("Error: units consumed cannot be negative.\n");
}
else if(units_consumed <=100){
	total_bill = units_consumed * 30;
	printf("total bill: %.2f frs\n",total_bill);
}
else if(units_consumed <=250){
	total_bill = units_consumed * 35;
	printf("total bill: %.2f frs\n",total_bill);
}
else {
		total_bill = units_consumed * 40;
	printf("total bill: %.2f frs\n",total_bill);
}
return 0;
}

