#include<stdio.h>
/*Code that calculates the area of a trapeze*/

int main(){
	float area, base1, base2, h;
	
	printf("Type in the two bases:");
	scanf("%f%f",&base1, &base2);
	printf("Type in the hight:");
	scanf("%f", &h);
	
	//Calculation
	area=((base1+base2)/2)*h;
	
	printf("The area is: %.2f", area);

}
