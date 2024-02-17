1#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/* Design and implement a program that generates and displays two random numbers between 1 and 500 that are to be added. 
The program should prompt the User for the answer. If the answer is correct, then a congratulations message should be printed.
If the answer is incorrect, then the correct answer should be printed. Your program should include if-statements. */
int main(void){
    srand(time(0));
    int attempt, operator1, operator2, answer,time;
    operator1 = rand()%500+1;
    operator2 = rand()%500+1;
    answer = operator1 + operator2;
    printf("What is the solution to %i + %i: ", operator1, operator2);
    scanf("%i", &attempt);  
    if (attempt==answer){
        printf("Congratulations! Correct answer!\n");
    }
    else{ 
        printf("Sorry, the answer is %i\n", answer);
    }
   
    return 0;
}