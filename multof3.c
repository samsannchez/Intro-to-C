#include <stdio.h>
/*This code will calculate all the multiples of 3 from 1-n. n will be given by the user*/
int main()
{
   int n, j=0;
   
   printf("How many numbers would you like to analize? : ");
   scanf("%i", &n);
   int list[n];
   
   for(int i=0; i<n; i++){
       if(i%3==0){
           list[j]=i;
           j++;
           
       }
   }


printf("Within this set of numbers there are %i multiples of 3.", j);
printf("\nThese numbers are:\n");

for(int i=0; i<j; i++){
    printf("%i\n", list[i]);
}


    return 0;
}
