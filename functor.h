#pragma once
#include <iostream>
#include <vector>
#include "factory.h"



class Functor
{
public:
    virtual void operator()(vector<Base*>& vec) = 0;
    virtual ~Functor(){};
};


class FunctorCreate : public Functor
{
private:
    map<string, Factory*> factories;
public:
    FunctorCreate(){
        factories["A"] = new AFactory;
        factories["B"] = new BFactory;
        factories["C"] = new CFactory;
    }
    
    
    ~FunctorCreate(){
        for (auto p: factories)
            delete p.second;
        factories.clear();
    }
    
    
    void operator()(vector<Base*>& vec){
        string classname;
        int v;
        cin >> classname >> v;
        
        vec.push_back(factories[classname]->createBase(v));
        
        return;
    }
};


class FunctorShowAll : public Functor
{
public:
    FunctorShowAll(){}
    
    
    void operator()(vector<Base*>& v){
        for (auto a: v)
            a->show();
        
        return;
    }
};