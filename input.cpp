#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char c = 'A';

    cin >> x >> y;
    cout << x << " " << y << " " << c << endl;

    // print the ascii value of char c
    int ascii = c;
    cout << ascii << endl;
    cout << int(c) << endl; // this is typecasting

    return 0;
}