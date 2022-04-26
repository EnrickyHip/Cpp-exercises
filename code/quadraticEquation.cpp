#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;

int getDelta(double a, double b, double c){
    return pow(b, 2) - (4 * a * c);
}

bool getRoots(double a, double b, double c, double& xI, double& xII){
    double delta = getDelta(a, b, c);

    if(delta < 0) return false;        
    
    xI = (-b + sqrt(delta)) / (2*a);
    xII = (-b - sqrt(delta)) / (2*a);
    return true;
}

int main(){ 
    double a, b, c, xI, xII;

    cout << "digit the values of a, b and c: ";
    cin >> a >> b >> c;

    bool roots = getRoots(a, b, c, xI, xII);

    if(!roots) cout << "There is no real roots";
    else {
        double sum = xI + xII;

        cout << "------------------------------------------" << endl;
        cout << setw(11) << "xI: " << xI << endl;
        cout << setw(11) << "xII: " << xII << endl;
        cout << setw(11) << "roots sum: " << sum << endl;
        cout << "------------------------------------------" << endl;
    }
    
    return 0;
}