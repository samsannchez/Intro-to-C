#include<stdio.h>
/*This code will check if a number given by the user is possitive or negative*/

int main(){
	int num;
	printf("Please type in your number:");
	scanf("%i", &num);
	
	//check if the number is possitive or negative
	
	if(num<0){
		printf("The number is negative");
	}
	if(num>0){
		printf("The number is positive");
	}
}
