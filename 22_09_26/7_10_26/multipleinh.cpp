#include<iostream>
using namespace std;

class A{
public:
void show1(){
    cout<<"show -A";
}
};

class B{
public:
void show2(){
    cout<<"show - B";
}
};

class c: public A, public B{
public:
void show3(){
    cout<<"show - C"<<endl;
}
};

int main(){
    c obj1;
    obj1.show1();
    obj1.show2();
    obj1.show3();
}
