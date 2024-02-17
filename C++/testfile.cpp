#include <iostream> 
#include <string>
using namespace std;

class TestClass{
    public:
        TestClass(string z){
            setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:    
        string name;

        
};

int main()
{
    TestClass DemoObj("Roberta Rafael");    
    
    cout << DemoObj.getName()<< endl;

    TestClass DemoObj2("Rafaela Robert");
    cout << DemoObj2.getName()<< endl;

    return 0;
}