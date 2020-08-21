#include<stdio.h>
/*Code that will calculate how many seconds are included in the hours, minutes and seconds given by the user*/

int main(){
	int hours, min, sec, time;
	printf("Enter the hours:");
	scanf("%i", &hours);
	printf("\nEnter the minutes:");
	scanf("%i", &min);
	printf("\nEnter the seconds:");
	scanf("%i", &sec);
	
	//Conversions 
	time= (min*60)+(hours*3600)+sec;
	
	printf("The time in seconds is: %i", time);
}
