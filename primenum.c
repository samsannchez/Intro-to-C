#include <stdio.h>
/*This code will tell the user if his number is a prime number*/
int main()
{
    int num, count=0;
    printf("Type your number: ");
    scanf("%i", &num);
    
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    
    if(count>2){
        printf("\n The number is compound");
    
    }
    else{
        printf("\n The number is prime");
    }
    return 0;
}
