#include <stdio.h>
void main(){
    int amount=0;
    char item;
    printf("LICK & CRUNCH\v1. Chocolate Bar \t20/-\n2. Inside Out \t\t40/-\n3. Creamy Rolling\t50/-\n");
    printf("Enter you choice:\n");
    scanf("%c",&item);
    switch(item){
        case '1':
        amount+=20;
        break;
        case '2':
        amount+=40;
        break;
        case '3':
        amount+=50;
        break;
        default:
        printf("Sorry! Not in our menu");
    }
    printf ("Amount to be paid: %d", amount);
}