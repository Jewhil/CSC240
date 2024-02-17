#include <stdio.h>
#include <math.h>

/*
+ Write a recursive C function fib(n) that ﬁnds the nth Fibonacci number

Write a recursive function that gcd(num1, num2) implements the GCD algorithm deﬁned below. 
You should not implement any other GCD algorithm.

Write a recursive C function called power(x,y) to ﬁnd x raised to the power of y. 
You can assume that y is a positive integer. Note that your method must be recursive. 
*/

int fibonacci(int x);
int Exponent(int x, int y);
int GCD(int x, int y);
int Factorial(int x);

int fibonacci(int x){
    if (x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

int Exponent(int x, int y){
    if (y>0){
        return x*Exponent(x,y-1);
    }
    else{
        return 1;
    }

}

int GCD(int x, int y){
    if ( y > x){
        return GCD(x,y);
    }
    else if (y == 0){
        return x;
    }
    else{
        return GCD(y, x%y);
    }
}

int Factorial(int x){
    if (x <=1){
        return x;
        }
    else{
        return x*Factorial(x-1); //Self referenced method n*(n-1)*((n-1)-1)... and so on
        }
}

int main(){
    int testnumber = 3;
   
    printf("Fibonacci number of %i: %i\n",testnumber, fibonacci(testnumber));
    
    int base = 5, pwr = 3;
    printf("%i to the %i power is: %i\n", base, pwr, Exponent(base,pwr));

    int number1 = 12, number2 = 4;
    printf("Greatest common divisor of %i and %i: %i\n", number1, number2, GCD(number1,number2));
    int factorial = 8;
    printf("The factorial of %i is: %i\n",factorial, Factorial(factorial));
    printf("%i\n", Factorial(1));
    printf("%i\n", Factorial(0));
}
