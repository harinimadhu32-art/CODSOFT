#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char op;

    cout << "==========================" << endl;
    cout << "    SIMPLE CALCULATOR" << endl;
    cout << "==========================" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            cout << "Result = " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result = " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result = " << result;
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                cout << "Result = " << result;
            }
            else
            {
                cout << "Error! Division by zero is not allowed.";
            }
            break;

        default:
            cout << "Invalid Operator!";
    }

    return 0;
}
