#include<stdio.h>
/*Ask the user for two numbers. Add them, multiply them, rest them and divide them by using operators*/
int main(){
	int num1, num2, sum, rest, mult, div;
	
	printf("Type your first number:\n");
	scanf("%i",&num1);
	printf("Type your second number:\n");
	scanf("%i", &num2);
	
	//Sum
	sum=num1+num2;
	//Rest
	rest=num1-num2;
	//multiply
	mult=num1*num2;
	//Divide
	div=num1/num2;
	
	/*Print all the results*/
	
	printf("******************************\n");
	printf("\tResults\n");
	printf("******************************\n");
	printf("The sum is: %i\n", sum);
	printf("The rest is: %i\n", rest);
	printf("The multiplication is: %i\n", mult);
	printf("The division is:%i\n", div);
}
