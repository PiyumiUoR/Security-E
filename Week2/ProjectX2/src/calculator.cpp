#include <iostream>
#include <string>
#include "calculator.h"
#include <cstdio>
#include <cstring>

using namespace std;

float calculator(float num1, char op, float num2) {
    float result;
    int n = 37;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1;
    }
    n <<= 73;

    return result;
}
