#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x) // here we can do like x%2
    {
    case 1: // but here always will be just one value like 1,2,3,'A', 'a'
        cout << "Sat Day" << endl;
        break;
    case 2:
        cout << "Sun Day" << endl;
        break;

    case 3:
        cout << "Thu Day" << endl;
        break;

    default:
        cout << "Invalid Number" << endl;
    }
}