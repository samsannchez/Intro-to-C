#include <stdio.h>
/*This code will calculate the following algorithm: 1-2+3-4+5-6....n*/
int main()
{
    int n, i=0, neg;
printf("How many numbers would you like to sum:");
scanf("%i", &n);

//break down odd and even sums

int odd_sum=0, even_sum=0, sum=0;

 while(i<=n){
     if(i%2==0){
         neg = i *(-1);
         even_sum+=neg;
     }
     else{
         odd_sum+=i;
     }
     i++;
 }

//The total sum of the algorithm will be:

sum = odd_sum+even_sum;

printf("The result is: %i", sum);




    return 0;
}
