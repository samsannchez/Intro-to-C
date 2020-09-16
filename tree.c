#include <stdio.h>
/*This code will print a tree of asterics of size n. Size will be given by the user*/
int main()
{
    int size, i;
    printf("What size do you want the tree to be:");
    scanf("%i", &size);
    
    for(i=1;i<=size;i++){
        int n=1;
        while(n<=i){
            printf("*");
            n++;
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
