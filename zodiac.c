#include<stdio.h>
/*This code will tell the user if their zodic sign is aries*/

int main(){
	char name[20], sign[10];
	
	printf("what is your name?");
	gets(name);
	printf("what is your sign?");
	scanf("%s", sign);
	
	//check whether or not the sign is aries
	
	if(strcmp(sign, "aries")==0){
		printf("%s your sign is aries", name);
	}
	else{
		printf("%s your sign is not aries", name);
	}
}
