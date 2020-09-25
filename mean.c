#include <stdio.h>
/*This code will calculate the mean of two numbers with a function*/

int mean(int num1, int num2); //prototype

int main()
{
    int a,b;
    printf("Type two numbers:\n");
    scanf("%i %i", &a, &b);
   printf("%i", mean(a,b));

    return 0;
}

int mean(int num1, int num2){
    int mean=0;
   
    mean=(num1+num2)/2;
    return mean;
}
