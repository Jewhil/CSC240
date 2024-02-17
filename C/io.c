#include <stdio.h>

int main(){
    char name[30];
    char init;
    int age;

    printf("Enter your first name, last initial, and age: ");
    scanf("%29s %s %i", name, &init, &age);

    printf("Welcome %s %c, %i\n", name, init, age);
    return 0;
}