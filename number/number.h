
#ifndef NUMBER_NUMBER_H
#define NUMBER_NUMBER_H

#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <cmath>
#include <typeinfo>

using namespace std;

class NumberInPSystem
{
public:


    NumberInPSystem(int val, string numsys = "10");
    NumberInPSystem(string val, string numsys);

    string value;
    string numeralsystem;

    NumberInPSystem toAny(int P);
    NumberInPSystem toDecimal();

    NumberInPSystem operation(NumberInPSystem num1,NumberInPSystem num2, string op);
    NumberInPSystem sqr(NumberInPSystem num1);
};



#endif //NUMBER_NUMBER_H
