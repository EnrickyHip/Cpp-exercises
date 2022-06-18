#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;

double get_delta(double a, double b, double c) {
    return pow(b, 2) - (4 * a * c);
}

double get_vertexY(double a, double b, double c) {
    double delta = get_delta(a, b, c);
    return -(delta / (4 * a));
}

double get_vertexX(double a, double b, double c) {
    return -b / (2*a);
}

double get_roots(double a, double b, double c, double& xI, double& xII) {
    double delta = get_delta(a, b, c);

    if (a == 0) return false;
    if (delta < 0) return false;        
    
    xI = (-b + sqrt(delta)) / (2*a);
    xII = (-b - sqrt(delta)) / (2*a);
    return true;
}

int find_roots(double a, double b, double c) {
    double xI, xII;
    const bool roots = get_roots(a, b, c, xI, xII);

    if(!roots) {
        if(a == 0) cout << "not a quadratic equation";
        else {
            xI = 0;
            xII = 0;
        }
    }

    cout << endl;
    cout << "values:" << endl;
    cout << "------------------------------------------" << endl;
    if (!roots) {
        cout << setw(11) << "there are no real roots." << endl;
        cout << setw(11) << endl;
    }
    cout << setw(11) << "delta: " << get_delta(a, b, c) << endl;
    cout << setw(11) << "xI: " << xI << endl;
    cout << setw(11) << "xII: " << xII << endl;
    cout << setw(11) << "vertex X: " << get_vertexX(a, b, c) << endl;
    cout << setw(11) << "vertex Y: " << get_vertexY(a, b, c) << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}

int find_equation(double x, double y, double xI, double xII) {
    double a, b, c;

    a = y / ((x - xI) * (x - xII));
    b = x * 2 * a;
    c = a * (xI * xII);

    cout << endl;
    cout << "values:" << endl;
    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "------------------------------------------" << endl;
    return 0;
}

int find_y(double a, double b, double c, double x) {
    double y;
    y = (a * pow(x, 2)) + (b * x) + c;

    cout << endl;
    cout << "value:" << endl;
    cout << "----------------------------" << endl;
    cout << "y: " << y << endl;
    cout << "----------------------------" << endl;

    return 0;
}

int main() { 
    int number;

    cout << endl;
    cout << "what you want to find?" << endl;
    cout << "------------------------------------------" << endl;
    cout << "type 0 to exit" << endl;
    cout << "type 1 to find roots, delta and vertex from a, b and c" << endl;
    cout << "type 2 to find the equation from vertex and roots" << endl;
    cout << "type 3 to find f(x) from equation and x" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << "type a number: " ;
    cin >> number;

    switch (number) {
    case 0:
        return 0;
        break;
        
    case 1: {
        double a, b, c;

        cout << endl;
        cout << "type the values of a, b and c: ";
        cin >> a >> b >> c;

        find_roots(a, b, c);
        break;
    }
    
    case 2: {
        double x, y;
        double xI, xII;
        double a, b, c;

        cout << "type vertex X and Y: ";
        cin >> x >> y;

        cout << "type xI and xII: ";
        cin >> xI >> xII;

        find_equation(x, y, xI, xII);
        break;
    }

    case 3: {
        double x, y;
        double a, b, c;

        cout << "type a, b, c values: ";
        cin >> a >> b >> c;

        cout << "type the x: ";
        cin >> x;

        find_y(a, b, c, x);
        break;
    }

    default:
        cout << "invalid number";
        break;
    }

    main();
    return 0;
}