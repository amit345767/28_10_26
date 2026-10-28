#include<iostream>
using namespace std;
class student
{
    //private:
    /* data */
    public:
    int n;
    string name;
    void display(){
        cout<<"this is a display function";
    }
};

int main(){
    cout<<"hello"<<endl;
    student obj;
    obj.name="amit";
    obj.n = 25;
    obj.display();
    cout<<obj.name<<endl;
    cout<<obj.n;
    return 0;

}