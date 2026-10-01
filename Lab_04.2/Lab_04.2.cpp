#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx;   // аргумент, початок, кінець інтервалу, крок
    double A, B, y;         // A - спільна частина, B - розгалужена частина,
    // y - значення функції

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "y" << " |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 1 / x + 4;

        if (x < 1)
            B = 0.65 * x + 8;
        else
            if (x < 5)
                B = atan((x + 6.1) / 2) + exp(x);
            else
                B = sqrt(1 + sqrt(x));

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(4) << y
            << " |" << endl;
        x += dx;
    }
    cout << "-------------------------" << endl;

    return 0;
}
