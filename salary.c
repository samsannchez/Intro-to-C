#include<stdio.h>
/*Code that will calulate the salary of a worker after a 25% increment*/

int main(){
	int salary, new_salary;
	printf("Please enter your salary:");
	scanf("%i", &salary);
	
	//Calculate new salary
	new_salary=salary*1.25;
	
	printf("Your salary after the increment is: %i", new_salary);
	
}
