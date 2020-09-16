#include <stdio.h>
/*This code will calculate the factorial of a number given by the user*/
int main()
{
    int num, fact=1;
    printf("Please type a number: ");
    scanf("%i", &num);
    
    for(int i =1; i<=num; i++){
        fact*=i;
        
    }
    
    printf("The factorial is: %i", fact);
    return 0;
}
