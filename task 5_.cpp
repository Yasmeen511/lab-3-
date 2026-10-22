#include <iostream>
using namespace std;
int main() {
    int a, b;
    char op;
    cout << "enter a value :" << endl;
    cin >> a;
    cout << "enter b value :" << endl;
    cin >> b;
    cout << "enter operation (+ , - , * , / ):";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "The result = " << a + b;
        break;
    case '-':
        cout << "The result = " << a - b;
        break;
    case '*':
        cout << "The result = " << a * b;
        break;
    case '/':
        if (b == 0) { cout << "cannot divide by zero!"; }
        else { cout << "The result = " << a / b; }
        break;
    default:
        cout << "entered wrong input";
    }
