#include<iostream>
using namespace std;
class student
{
    public:
    student()
{
cout<<"constructor";
}
    ~student()
{
cout<<" object destrocter";
}
};
int main()
{
    cout<< "main function start";
student();
cout<< "working with object";
return 0;
}