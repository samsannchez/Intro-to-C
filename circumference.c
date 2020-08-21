#include<stdio.h>
#include<math.h>
/*This code will calculate the circumference of a circle with a provided radious*/
#define PI 3.1415

main(){
	float radious, circum;
	
	printf("Please type in the radious:\n");
	scanf("%f",&radious);
	
	/*Calculate circumference*/
	circum=(pow(radious, 2))*PI;
	printf("The circumference is: %.2f", circum);
}
