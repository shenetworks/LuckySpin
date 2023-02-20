
#include <stdio.h> 
#include <stdlib.h>
// to compile use gcc luckyspin.c -o luckySpin
// Maybe use float and double for the buffer overflow portion
// 3 spins per day allowed unless you get a free spin
int main() {
    
    
    int numberOfSpins = 0;

    printf("Welcome to Happy Eater\n");
    printf("You get 3 chances per day to win yummy prizes\n");
    
    while (numberOfSpins < 3 ) {
        int startSpin = 0;
        printf("Would you like to take a spin?\n");
        printf("Number of spins used: %i/3 \n", numberOfSpins );
        printf("Yes(1)/No(2):");
        scanf("%d", &startSpin);
        int spinNumber = rand() % 30;
   
        if (startSpin == 1) {
            numberOfSpins++;
            switch (spinNumber) {
                case 1:
                    printf("You won 1 (one) free milkshake!\n");
                    break;
                case 2:
                    printf("You won a 4 piece chicken nugget meal\n");
                    break;
                case 3:
                    printf("You won a $10 gift card!\n");
                    break;
                case 4:
                    printf("You won a medium french fry!\n");
                    break;
                case 5:
                    printf("You won a $30 gift card!\n");
                    break;
                case 6:
                    printf("You won buy 1 burger get 1 free!\n");
                    break;
                case 7:
                    printf("You won a free cookie\n");
                    break;
                case 8:
                    printf("You won 1 (one) free medium sized drink\n");
                    break;
                case 9:           
                    printf("CONGRATS! You wont the jackpot! Unlimited food for life! Use code X72FG4S\n");
                    break;
                case 10:
                    numberOfSpins -= 1; // code for free spin
                    printf("You won a free spin!\n"); 
                    break;
                default:
                    printf("Not a winner this time, better luck next time!\n");
            }
        } else if (startSpin == 2) {
            printf("Come back later when you want to spin\n"); 
        } else {
            printf("Invalid Entry\n");
        }
    }    
    if (numberOfSpins >= 3) {
        printf("You are out of spins, come back tomorrow to try again\n");
    }  
}