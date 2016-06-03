#pragma once
#include "classes.h"



using namespace std;


class Factory {
public:
    virtual Base* createBase(int value) = 0;
    virtual ~Factory(){}
};


class AFactory : public Factory {
public:
    Base* createBase(int value) { return new A(value); }
};


class BFactory : public Factory {
public:
    Base* createBase(int value) { return new B(value); }
};


class CFactory : public Factory {
public:
    Base* createBase(int value) { return new C(value); }
};