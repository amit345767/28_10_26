#include<iostream>
using namespace std;
class student{
    public :
    int marks;
    string name;

};

int main(){
    student obj;
    obj.marks = 40;
    obj.nane = "bca";
    cout<<obj.name<<endl;
    cout<<obj.marks; 
    return 0;

}