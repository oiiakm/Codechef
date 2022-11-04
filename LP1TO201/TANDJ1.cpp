#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k, s;
        cin >> a >> b >> c >> d >> k;
        s = abs(c - a) + abs(d - b);
        if (s > k)
        {
            cout << "NO"
                 << "\n";
        }
        else if (s == k || (k - s) % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}
