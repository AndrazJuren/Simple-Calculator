#include <iostream>
using namespace std;

int main() {
    char math;
    float num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> math;

    cout << "Enter a: ";
    cin >> num1;

    cout << "Enter b: ";
    cin >> num2;

    switch(math) {
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
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero.";
                return 1;
            }
            break;
        default:
            cout << "Error! Invalid operator.";
            return 1;
    }

    cout << "Result: " << result;

    return 0;
}
