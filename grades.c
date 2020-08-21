#include<stdio.h>
/*This code will tell the student if he is excelent, notable approved or failed, based on his letter grade*/

int main(){
	char grade;
	
	printf("Hello, please type in your grade");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A': printf("Excelent"); break;
		case 'B': printf("Notable"); break;
		case 'C': printf("Approved"); break;
		case 'D': 
		case 'F': printf("Failed"); break;
		default: printf("error");
	}
}
