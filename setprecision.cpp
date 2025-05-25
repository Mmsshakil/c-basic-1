#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 45.438453;
    // setprecision for print the digit after point
    cout << fixed << setprecision(4) << x << endl;
}