#include <stdio.h>
/*This code will execute sum,rest, multiply or divide any two numbers given by the user*/

int sum(int num1, int num2); //prototype
int res(int num1, int num2);
int mul(int num1, int num2);
int di(int num1, int num2);

int main()
{
    int a,b, w=0, x=0, y=0, z=0, opt;
    do{
    printf("\n***********************");
    printf("\n\tWELCOME");
    printf("\n***********************");
    printf("\nType two numbers:");
    scanf("%i %i", &a, &b);
    printf("\n***********************");
    printf("\nThanks!");
    printf("\nSelect an option from the menu:");
    printf("\n 1.Sum\t2.Rest\t3.Multiply\t4.Divide\t5.Exit\n");
    scanf("%i", &opt);
    printf("\n***********************");
   
   
    w=sum(a, b);
    x=res(a, b);
    y=mul(a, b);
    z=di(a, b);
   
    switch(opt){
        case 1: printf("\nThe sum is: %i", w);
                break;
        case 2: printf("\nThe rest is: %i", x);
                break;
        case 3: printf("\nThe multiplication is:%i", y);
                break;
        case 4: printf("\nThe division is: %i", z);
                break;
        case 5: printf("\nCome back soon");
        default: printf("\nYou have selected the wrong option. Try again!");
    }
   
    }while(opt=!=5);
   
    return 0;
}

int sum(int num1, int num2){
    int result=0;
    result=num1+num2;
    return result;
}
int res(int num1, int num2){
    int result=0;
    result=num1-num2;
    return result;
}
int mul(int num1, int num2){
    int result=0;
    result=num1*num2;
    return result;
}
int di(int num1, int num2){
    int result=0;
    result=num1/num2;
    return result;
}
