#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, z = 0;
        cin >> n >> x;
        int max = 0;
        int s[n];
        int r[n];
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> r[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] <= x)
            {

                p[i] = r[i];
            }
            else
            {
                p[i] = 0;
            }
        }

        sort(p, p + n);

        cout << p[n - 1] << endl;
    }
    return 0;
}
