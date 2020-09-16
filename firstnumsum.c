#include <stdio.h>
/*This code will compute the Sum of the first n numbers*/

int main(){
 int num, i=0, sum;
 
 printf("Type in the total numbers to sum: ");
 scanf("%i", &num);
 
 while(i<=num){
     sum+=i;
     i++;
 }
 printf("/nThe sum is: %i", sum);
}
