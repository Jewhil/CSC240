#include <iostream> 
using namespace std;

/* Create a program that contains a class called Math that has class variables, a constructor, an add method and a print method. 
The add method should add n numbers together and your print method should print the result when called. In your main, you should create 
a Math object and something to hold n numbers (you may specify how many numbers and what those numbers are but your program should still 
work for any amount of numbers with whatever values - you can assume they will always be integers for this assignment). Use those to call 
your add function and print the result. */

class Math{
    public:
        int number;
        int* arr;
        int solution;
    
    Math(int number1, int arr1[])
    {
        number = number1;
        arr = arr1;
        solution = 0;
    }

    int add()
    {
            solution = 0 ;
            if(arr){
                for(int i=0; i<number;i++)
                {
                    solution = solution+arr[i];
                }
            }
            return solution;
    }

    void print()
    {
            cout <<"Total Sum: " << solution<<endl;
    }
};
int main()
{
    int n = 0;
    cout <<"How many numbers would you like to add? \n";
    cin >> n;
    cout << "Enter numbers you would like to add:  \n";
    int arr1[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr1[i];
    }

    Math obj(n, arr1);
    obj.add();
    obj.print();
    return 0;
}