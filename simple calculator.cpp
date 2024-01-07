#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char function;
    double number1, number2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> function;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    switch(function) {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2;
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2;
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2;
            break;
        case '/':
            if (number2 != 0)
                cout << number1 << " / " << number2 << " = " << number1 / number2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operator.";
    }

    return 0;
  getch();
}
