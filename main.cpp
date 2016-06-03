#include <map>
#include <vector>
#include "factory.h"
#include "functor.h"



using namespace std;


int main() {
    map<string, Functor*> functions;
    functions["create"] = new FunctorCreate;
    functions["showall"] = new FunctorShowAll;
    
    int n;
    vector<Base*> vec;
    cin >> n;
    while (n-- > 0) {
        string cmd;
        cin >> cmd;
        (*functions[cmd])(vec);
    }
    
    for (auto p: functions)
        delete p.second;
    functions.clear();
    
    return 0;
}