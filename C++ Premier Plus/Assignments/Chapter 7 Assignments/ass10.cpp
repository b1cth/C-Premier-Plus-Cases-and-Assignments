#include "functions.h"
int main(){
    double x, y;
    cout << "Enter x, y: \n";
    while (cin >> x >> y) {
        cin.get();
        cout << "Add: \n";
        double result = calculate(x, y, add);
        cout << x << " + " << y << " = " << result << endl;
        cout << "Multiply: \n";
        result = calculate(x, y, multiply);
        cout << x << " * " << y << " = " << result << endl;
    }
}

double calculate(double a, double b, double (*pt)(double a, double y)) {
    return pt(a, b);
}

double add(double a, double b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}