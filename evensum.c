#include <stdio.h>
/*This code sum even numbers from 0-n. n is given by the user*/
int main()
{
    int n, i=0, sum=0;
  printf("How many numbers would you like to sum: ");
  scanf("%i", &n);
  
  while(i<=n){
      if(i%2==0){
          sum+=i;
      }
      i++;
  }
printf("The total sum of even number is: %i", sum);
    return 0;
}
