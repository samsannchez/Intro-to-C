#include <stdio.h>
/*This code will compute the operations to convert C to F or C to K*/
//prototypes
float fahrenheit(float temp);
float kelvin(float temp);


int main()
{
    
    float res_f=0, res_k=0, temp;
    int opt;
    do{
    printf("*************************************\n");
    printf("\tWELCOME\n");
    printf("*************************************\n");
    printf("1. Convert Celcius to Fahrenheit\n");
    printf("2. Convert Celcius to Kelvin\n");
    printf("3. Exit\n");
    printf("Select your option:  ");
    scanf("%i", &opt);
    printf("*************************************\n");
    printf("Type the temperature you would like to convert\n");
    scanf("%f", &temp);
    
    switch(opt){
        case 1: res_f=fahrenheit(temp);
		printf("\nThe temperature in Fahrenheit is:  %f", res_f );
                break;
        case 2: res_k=kelvin(temp);
		printf("\nThe temperature in Kelvin is:  %f", res_k);
                break;
        default: printf("Wrong option, try again.\n");
    }
    
     printf("\n*************************************\n\n");
    
    }while(opt!=3);
}


float fahrenheit(float temp){
    float faren=0;
    faren=(9*temp)/5+32;
    return faren;
}


float kelvin(float temp){
    float kel=0;
    kel=temp+273.15;
    return kel;
}

