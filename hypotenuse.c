#include<stdio.h>
#include<math.h>
/*This code will calculate the hypotenuse of a triangle when the user has given two sides*/
main(){
	int side1, side2; 
	float hyp;
	
	printf("Plase type your two sides:\n");
	scanf("%i%i",&side1,&side2);
	
	//Calculate hypotenuse
	
	hyp=sqrt(pow(side1,2)+pow(side2,2));
	
	printf("The hypotenuse is:%.2f", hyp);
	

	
}
