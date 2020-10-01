#include <stdio.h>
/*This code computes the Fibonacci algorithm from 1 to n. 
n is given by the user*/

int main()
{
    int num, i, x=0, y=1, z=1;
    printf("Type the number of elements");
    scanf("%i", &num);
    printf("1, ");
    for (int i=0; i<num;i++) {
        z=x+y;
        x=y;
        y=z;
        printf("%i, ", z);
    }

    return 0;
}
