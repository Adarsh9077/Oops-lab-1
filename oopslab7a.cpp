//		LAB - 7

//Default Constructor

/*Program to demonstrate the concept of Default constructor.*/
#include <iostream>
using namespace std;
class Cons
{
    public:
    int m;
   Cons()
    {
        m = 100;
    }
   
};
int main()
{
    Cons cc;
     cout << "The value of m is : " << cc.m ;
    return 0;
}