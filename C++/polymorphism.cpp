#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void color(){
        cout<<"Yellow"<< endl;
    }
};

class Circle : public Shape{
    void color(){
        cout<<"Green"<< endl;
    }
};

class Square : public Shape{
    void color(){
        cout<<"Red"<< endl;
    }
};
class Triangle : public Shape{

};

int main()
{
    Shape *shapes[5];
    shapes[0] = new Shape();

    Circle *c = new Circle();
    Square *s = new Square();
    Triangle *t = new Triangle();

    shapes[1] = c;
    shapes[2] = s;
    shapes[3] = t;

    for(int i=0; i<4;i++)
        shapes[i]->color();
    return 0;

}