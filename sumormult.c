#include <stdio.h>
/*This code will recive a number from the user. If the number is larger than 10, then it will multiply 
the first 10 numbers. Else, it will sum the first 10 numbers*/
int main()
{
    int num, sum=0, mult=1;
    printf("Please digit a number:");
    scanf("%i", &num);
    
    //sum and mult all numbers from 1-10
    
    for(int i=1; i<=10; i++){
            sum += i;
            mult*= i;
        }
    
    if(num<10){
        printf("The sum of the numbers from 1-10 is: %i", sum);
    }
    else{
        printf("The mult of the numbers from 1-10 is: %i", mult);
    
    }
    
    

    return 0;
}
