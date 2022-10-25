#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int c, x, r, p = 0;
        cin >> x;
        c = x;
        while (x != 0)
        {
            r = x % 10;
            p = p * 10 + r;
            x = x / 10;
        }
        if (p == c)
        {
            cout << "wins"
                 << "\n";
        }
        else
        {
            cout << "loses"
                 << "\n";
        }
    }
    return 0;
}
