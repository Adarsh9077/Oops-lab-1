/* ***** LAB - 10b ***** */

/*Program to demonstrate the concept of Parameterized constructor.*/

#include <iostream>
using namespace std;

class output
{
    private:
    int x,y ;
    public: 
    output(int x1, int y1)
    {
        x=x1;
        y=y1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{ 
    output m(90, 77);
    cout<< "The value of x is : "<<m.getX()<<"\n";
    cout<< "The value of y is : "<<m.getY();
    return 0;
}