#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double m = 2;  

    double x;
    double a, b, y;

    
    cout << "Введіть x ";
    cin >> x;

    
    a = sqrt(abs(x));
    b = pow(x, 4) + pow(m, 2);

    y = pow(cos(a + sin(b)), 2);

    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "y = " << y << endl;

    return 0;
}

