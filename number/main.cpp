#include "number.h"
int main(){

    NumberInPSystem num1{607};
    NumberInPSystem num2{99};

    NumberInPSystem num3 = num1.toAny(16);
    cout << "Num3 in 16 system: " << num3.value<< "\n";
    NumberInPSystem num4 = num2.toAny(16);
    cout << "Num4 in 16 system: " << num4.value<< "\n";

    NumberInPSystem sum = sum.operation(num3, num4, "*");
    NumberInPSystem decsum = sum.toDecimal();

    cout << "Sum: " << sum.value << "\n";
    cout << "Sum in decimal: " << decsum.value << "\n";

    // Квадратное уравнение

     


}