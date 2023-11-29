#include <iostream>

int main(){
    int x, y;
    char oper;
    cout << "What operator would you like (+, -, *, /): " << endl;
    cin >> oper;

    cout << "Enter a number for x: " << endl;
    cin >> x;
    cout << "Enter a number for y: " << endl;
    cin >> y; 

    switch (oper){
        case '+':
            cout << x << " + " << y << " = " << x + y;
            break;
        case '-':
            cout << x << " - " << y << " = " << x - y;
            break;
        case '*':
            cout << x << " * " << y << " = " << x * y;
            break;
        case '/':
            cout << x << " / " << y << " = " << x / y;
            break;
    }
    return 0;
}
