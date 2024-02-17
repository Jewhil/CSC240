#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
Design and implement a program that implements playing a dice rolling game. 
Have your program ‘roll’ two dice and keep track of the winner. Display who won after each roll.
Ask the user if they want to play again; keep playing until the user chooses to stop. */

int main(void){
    int Dice1, Dice2;
    int Games=0, Player1=0, Player2=0, Tie=0;
    char Answer[3];
    while (Answer[0]!='n'){
        Games++;
        srand(time(0));
        Dice1 = rand()%6+1;
        Dice2 = rand()%6+1;
        printf("Dice 1: %i, Dice 2: %i\n", Dice1, Dice2);
        if (Dice1 > Dice2){
            printf("Player 1 Wins!\n");
            ++Player1;
        } 
        else if (Dice1 < Dice2){
            ++Player2; 
            printf("Player 2 Wins!\n");  
        }
        else if (Dice1 == Dice2){
            printf("Tie\n");
            ++Tie;
        }
        printf("Player 1: %i\t Player 2: %i\t Ties:%i\n",Player1, Player2, Tie);
    
        printf("Games: %i\n", Games);
        printf("\nPlay again?: ");
        scanf("%s", Answer);
    
    }

    return 0;
}