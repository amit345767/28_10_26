#include <iostream>
using namespace std;

// Vehicle class
class vehicle
{
public:
    void travel()
    {
        cout << "This is vehicle class" << endl;
    }
};

// Fare class
class fare
{
public:
    void fare_a()
    {
        cout << "It is fare class" << endl;
    }
};

// Car class - inherits vehicle
class car : public vehicle
{
public:
    void car_travel()
    {
        cout << "It is car class" << endl;
    }
};

// Bus class - inherits vehicle and fare
class bus : public vehicle, public fare
{
public:
    void bus_travel()
    {
        cout << "It is bus class" << endl;
    }
};

// Main function
int main()
{
    // Car object
    car c;

    cout << "Car Details:" << endl;
    c.travel();
    c.car_travel();

    cout << endl;

    // Bus object
    bus b;

    cout << "Bus Details:" << endl;
    b.travel();
    b.fare_a();
    b.bus_travel();

    return 0;
}
