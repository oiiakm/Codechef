#include <iostream>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        if ((a - b) % (2 * x) == 0)
            cout << "YES"<< "\n";
        else
            cout << "NO"<< "\n";
    }
    return 0;
}