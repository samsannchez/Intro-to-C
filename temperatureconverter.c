#include<stdio.h>
/*This code will convert celcius to farenheit*/

main(){
	float celcius, farenheit;
	
	printf("Type in your temperature in celcius\n");
	scanf("%f",&celcius);
	
	//Convert this to farenheit
	
	farenheit=(celcius*1.8)+32;
	
	printf("The temperature in farenheit is: %.2f", farenheit);
}
