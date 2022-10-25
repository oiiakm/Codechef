#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        double x;
        cin >> x;
        cout << ceil(x / 25) << "\n";
    }
    return 0;
}