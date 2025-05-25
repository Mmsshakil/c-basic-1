#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << endl; // cout << min({2,5,3,1,7}) << endl;
    cout << max(a, b) << endl;

    swap(a, b);

    cout << "After swap " << a << " " << b;

    return 0;
}