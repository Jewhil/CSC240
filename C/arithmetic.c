#include <stdio.h>
#include <math.h>

/* Design and implement a program that reads in two integers 
and then asks the User if they want to find the sum, difference, or product of them. 
Using a switch statement, preform the correct calculation and print the result. */

int main(){
    int int1, int2, answer;
    char operation[7];
    printf("Enter two integers\n");
    scanf("%i %i", &int1, &int2);
    printf("Do you want to add, subtract, or multiply\n");
    scanf("%1s", &operation[0]);
   
    switch (operation[0]){
        case 'a':
            answer = int1+int2;
            break;
        case 's':
            answer = int1-int2;
            break;
        case 'm':
             answer = int1*int2;
             break;
    }
    printf("The answer is %i\n", answer);
    return 0;
}