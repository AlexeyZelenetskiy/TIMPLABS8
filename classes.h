#pragma once
#include <iostream>



using namespace std;


class Base {
public:
    virtual void show()=0;
protected:
    Base(int v) : value(v){}
    int value;
};


class A: public Base{
public:
    A(int v) : Base(v){}
    void show(){ cout<<"class A: "<<value<<endl; }
};


class B: public Base{
public:
    B(int v) : Base(v){}
    void show(){ cout<<"class B: "<<value<<endl; }
};


class C: public Base{
public:
    C(int v) : Base(v){}
    void show(){ cout<<"class C: "<<value<<endl; }
};
