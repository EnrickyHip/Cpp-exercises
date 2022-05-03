#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;

int get_delta(double a, double b, double c){
    return pow(b, 2) - (4 * a * c);
}

bool get_roots(double a, double b, double c, double& xI, double& xII){
    double delta = get_delta(a, b, c);

    if(a == 0) return false;
    if(delta < 0) return false;        
    
    xI = (-b + sqrt(delta)) / (2*a);
    xII = (-b - sqrt(delta)) / (2*a);
    return true;
}

int main(){ 
    double a, b, c, xI, xII;

    cout << "digit the values of a, b and c: ";
    cin >> a >> b >> c;

    const bool roots = get_roots(a, b, c, xI, xII);

    if(!roots) {
        if(a == 0) cout << "not a quadratic equation";
        else cout << "There is no real roots";
    }
    else {
        const double sum = xI + xII;

        cout << "------------------------------------------" << endl;
        cout << setw(11) << "xI: " << xI << endl;
        cout << setw(11) << "xII: " << xII << endl;
        cout << setw(11) << "roots sum: " << sum << endl;
        cout << "------------------------------------------" << endl;
    }
    
    return 0;
}