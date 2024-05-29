#include "number.h"

// Конструкторы
NumberInPSystem::NumberInPSystem(int val, string numsys){
    value = to_string(val);
    numeralsystem = numsys;
}

NumberInPSystem::NumberInPSystem(string val, string numsys){
    value = val;
    numeralsystem = numsys;
}

// Перевод в P систему счисления
NumberInPSystem NumberInPSystem::toAny(int P) {
    char digits[]{"0123456789ABCDEF"};
    int val = stoi(value);
    string result = "";

    if (P >= 2 && P <= 16) {
        while (val > 0) {
            result = digits[val % P] + result;
            val = val / P;
        }
        string newP = to_string(P);
        NumberInPSystem newnum{result, newP};

        return newnum;
    } else { cout << "Wrong P"; }

}

// Перевод в десятичную систему счисления
NumberInPSystem NumberInPSystem::toDecimal() {
    int P = stoi(numeralsystem);
    map<char,int> check;
    check['A']=10;
    check['B']=11;
    check['C']=12;
    check['D']=13;
    check['E']=14;
    check['F']=15;

    int temp,c,k;
    temp=c=k=0;

    if (P<10){
        k = value.length()-1;
        for (int i=0; i<value.length();i++)
        {
           c=value[i]-'0';
           temp += c*pow(stoi(numeralsystem),k);
           k--;
        }
        NumberInPSystem newnum{temp, "10"};
        return newnum;

    }
    else {
        k=value.length()-1;
        for(int i=0; i<value.length(); i++){
            if (value[i]=='A'||value[i]=='B'||value[i]=='C'||value[i]=='D'||value[i]=='E'||value[i]=='F')
            {
                c=check[value[i]];
            }
            else {c = value[i]-'0';}

            temp += c*pow(stoi(numeralsystem),k);
            k--;
        }
        NumberInPSystem newnum{temp, "10"};
        return newnum;
    }
}







