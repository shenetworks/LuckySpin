#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
// Expected result: buffer overflow should allow the attacker to get the unlimited food code by increasing their alloted spins 
// 3 spins per day allowed unless you get a free spin
int main() {
    
    srand(time(0));
    int numberOfSpins = 0; // numberOfSpins starts out at 0 and increases by 1 every valid spin

    printf("Welcome to Lucky Spin\n");
    printf("You get 3 chances per day to win yummy prizes\n");
    
    
    while (numberOfSpins < 3 ) {

        char startSpin[2];
        printf("Number of spins used: %i/3 \n", numberOfSpins );
        printf("Would you like to take a spin?\n");
        printf("1 - Yes / 2 - No:\n");
        scanf("%s", startSpin);
        int spins; spins = atoi(startSpin); 
        int spinNumber = rand() % 30;
        // printf("startSpin:%p\n", startSpin );
        // printf("numberOfSpins:%p\n", &numberOfSpins);

        if (spins == 1) {
            numberOfSpins++; //this will increase the numberOfSpins by 1 every spin
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
                    printf("CONGRATS! You won the jackpot! Unlimited food for life! Use code X72FG4S\n");
                    break;
                case 10:
                    numberOfSpins -= 1; // free spin will decrease numberOfSpins by 1
                    printf("You won a free spin!\n"); 
                    break;
                default:
                    printf("Not a winner, better luck next time!\n");
            }
        } else if (spins == 2) { // user chooses not to spin 
            printf("Come back later when you want to spin\n");
            continue; 
        } else { // if the user input isnt a 1 or a 2 it will be deemed an invalid input
            printf("Invalid Entry\n");
        }
    }    
    if (numberOfSpins == 3) { // once numberOfSpins reaches 3 program will end
        printf("You are out of spins, come back tomorrow to try again\n");
        // printf("Number of spins used: %i/3 \n", numberOfSpins );

    }  else if (numberOfSpins > 3) { //if numberOfSpins is greater than 3 it will throw and error and quit 
        printf("Oops! There seems to be an error. Try again tomorrow.");
    } else {
        printf("Invalid Entry");
    }
}