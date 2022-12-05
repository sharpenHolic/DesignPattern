#include <iostream>
#include <string>
using namespace std;

class SingleTon
{
protected:
    SingleTon(const string value) : _value(value) {}
    string _value;

public:
};