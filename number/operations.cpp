#include "number.h"

// Операции
NumberInPSystem NumberInPSystem::operation(NumberInPSystem num1, NumberInPSystem num2, string op) {

    // Сложение
    if (num1.numeralsystem == num2.numeralsystem && op == "+") {

        int numsys = stoi(num1.numeralsystem);
        NumberInPSystem dec1 = num1.toDecimal();
        NumberInPSystem dec2 = num2.toDecimal();

        int sum = stoi(dec1.value) + stoi(dec2.value);

        NumberInPSystem sumresult{sum, to_string(numsys)};

        return sumresult.toAny(numsys);
    }
        // Вычитание
    else if (num1.numeralsystem == num2.numeralsystem && op == "-") {

        int numsys = stoi(num1.numeralsystem);
        NumberInPSystem dec1 = num1.toDecimal();
        NumberInPSystem dec2 = num2.toDecimal();

        int sum = stoi(dec1.value) - stoi(dec2.value);

        NumberInPSystem sumresult{sum, to_string(numsys)};

        return sumresult.toAny(numsys);
    }

    else if (num1.numeralsystem == num2.numeralsystem && op == "*") {
        // Умножение
        int numsys = stoi(num1.numeralsystem);
        NumberInPSystem dec1 = num1.toDecimal();
        NumberInPSystem dec2 = num2.toDecimal();

        int sum = stoi(dec1.value) * stoi(dec2.value);

        NumberInPSystem sumresult{sum, to_string(numsys)};

        return sumresult.toAny(numsys);
    }

    else if (num1.numeralsystem == num2.numeralsystem && op == "/") {
        // Деление
        int numsys = stoi(num1.numeralsystem);
        NumberInPSystem dec1 = num1.toDecimal();
        NumberInPSystem dec2 = num2.toDecimal();

        int sum = stoi(dec1.value) / stoi(dec2.value);

        NumberInPSystem sumresult{sum, to_string(numsys)};

        return sumresult.toAny(numsys);
    }

    else {
        cout << "Different systems";
    }
}


