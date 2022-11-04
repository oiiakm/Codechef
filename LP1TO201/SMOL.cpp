#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n >= k && k != 0)
        {
            n = n % k;
            if (n < k)
            {
                cout << n << "\n";
            }
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}
