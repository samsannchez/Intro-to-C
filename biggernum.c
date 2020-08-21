#include<stdio.h>
/*This code will let the user know which number is bigger*/

int main(){
	int num1, num2;
	printf("Please provide your two numbers:");
	scanf("%i%i",&num1, &num2);
	//Calculate which number is bigger and print it
	if(num1>num2){
		printf("%i is bigger than %i", num1, num2);
	}
	else{
		printf("%i is bigger than %i", num2, num1);
	}
}
