#include<stdio.h>
#include<math.h>
/*This root will calculate the sqrt of any number. If the sqrt is imaginary it will let the user know*/

int main(){
	int num;
	float res;
	
	printf("Type the number:");
	scanf("%i", &num);
	
	//check if num is negative or possitive
	
	if(num>=0){
		res=sqrt(num);
		printf("The square root is: %.2f", res);
	}
	else{
		printf("The result is an imaginary square root");
	}
	
	
	
}

