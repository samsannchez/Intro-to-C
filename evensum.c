#include <stdio.h>
/*This code will calculate the sum of all the even number from 1-n. 
n will be provided by the user. The code will also tell the user how many numbers are on the sum*/
int main()
{
   int num, counter=0, sum=0;
printf("Until what number do you want to sum?: ");
scanf("%i", &num);

//Get all even numbers

    for(int i=0;i<=num;i++){
        if(i%2==0){
            counter++;
            sum+=i;
        }
        
    }
    
    printf("There are %i elements in this sum\n", counter);
    printf("The sum is: %i", sum);
    return 0;
}
