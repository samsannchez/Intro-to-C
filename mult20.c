#include <stdio.h>
/*This code will compute the multiplication of a number by 1-20. 
The number will be given by the user*/
int mult(int number1, int number2);

int main()
{
    int num, res=0;
printf("What number would you like to multiply?: ");
scanf("%i", &num);
printf("\n*************************************");
printf("\nThe result is: ");
for(int i=1;i<=20;i++){
    res=mult(num,i);
    printf("\n%i*%i=%i", num, i, res);
}
    
return 0;    
}


int mult(int number1, int number2){
    int result=0;
    result=number1*number2;
    return result;

}