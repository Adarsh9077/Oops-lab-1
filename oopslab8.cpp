/* ******* LAB - 11 ******* */

// Program to demonstrate the concept of destructor.

#include <iostream>
using namespace std;

class DM
{
public:
    int meters;
    int centimeters;

    DM(int m, int cm)
    {
        meters = m;
        centimeters = cm;

        // While loop 

        while (centimeters > 99)
        {
            centimeters -= 100;
            meters++; 
        }
    }

    void display()

    {
        cout<<"Meters: "<<meters<<endl;
        cout<<"Centimeters: "<<centimeters<<endl;
    }
};

class DB
{
public:
    int feet;
    int inches;

    DB(int ft, int in)
    {
        feet = ft;
        inches = in;

        while (inches > 11)
        {
            inches -= 12;
            feet++;
        }
    }

    void display()
    {
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
};

DM add_DB_to_DM(DM a, DB b)
{
    DM result(a.meters, a.centimeters);

    result.meters += 0.3048*b.feet;
    result.centimeters += 2.54*b.inches;

    while (result.centimeters > 99)
    {
        result.centimeters -= 100;
        result.meters++; 
    }

    return result;
}

int main()
{
    DM obj1(19, 25);
    DB obj2(28, 10);

    obj1.display();
    obj2.display();

    DM result = add_DB_to_DM(obj1, obj2);
    result.display();

    return 0;
}