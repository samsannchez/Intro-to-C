#include <stdio.h>
int factorial(int n);

int main()
{
    int numero;
    printf("Digit a number: ");
    scanf("%i", &number);
    printf("El factorial del numero es: %i", factorial(number));
    


    return 0;
}

int factorial(int n){
if(n<=1){
    return 1;
}
else{
    return (n*factorial(n-1));
}
    
    
}
