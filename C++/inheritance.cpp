#include <iostream> 
using namespace std;

/*
Adding on to your last assignment, create an Addition class and a Multiplication class that are children to your Math class. 
Take care that your program uses inheritance. Think, what variables/methods can I use from the parent class instead of recreating it in the child class? 
Your addition and multiplication should work with n numbers. Create objects in your main to show inheritance. 

In a block of code in you program, in a separate text/doc/PDF file, or in the text entry describe how your program is using inheritance. 
*/

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

class Addition: public Math{

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

    int l = 0;
    cout <<"How many numbers would you like to add? \n";
    cin >> l;
    cout << "Enter numbers you would like to add:  \n";
    int arr1[l];
    for(int i =0;i<l;i++)
    {
        cin>>arr1[i];
    }
    Addition obj2(l ,arr1);
}