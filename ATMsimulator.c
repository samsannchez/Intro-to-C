#include <stdio.h>
/*This code will simulate an ATM. Which has 100 dollars already on the bank account*/

int main(){
    int option, money_in, money_out, total=100;
    printf("\tWelcome to you virtual ATM");
    printf("\n1. Deposit money");
    printf("\n2. Widthraw money");
    printf("\n3. Exit\n");
    scanf("%i", &option);
    switch(option){
        case 1:
        printf("How much money would you like to deposit?");
        scanf("%i", &money_in);
        total+=money_in;
        printf("Your account has: $%i", total);
        break;
        case 2:
        printf("How much money would you like to widthraw?");
        scanf("%i", &money_out);
        if(money_out>total){
            printf("You do not have enough money on your account.");
        }
        else{
        total-=money_out;
        printf("Your account has: $%i", total);}
        break;
        case 3:
        printf("Thank you.");
        break;
    }
    
    
    

    return 0;
}