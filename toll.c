#include<stdio.h>
/*This code will calculate the tolls that need to be payed by each type of vehicle*/
int main(){
int vehicle;
printf("Select a type of vehicle:\n");
printf("1- Truck\n2- Car\n3-Motorcycle\n");
scanf("%i", &vehicle);

switch(vehicle){
	case 1: printf("The total for a truck is 20 dollars"); break;
	case 2: printf("The total for a car is 10 dollars"); break;
	case 3: printf("The total for a motorcycle is 5"); break;
	default: printf("This vehicle is not allowed"); break;
}

}

