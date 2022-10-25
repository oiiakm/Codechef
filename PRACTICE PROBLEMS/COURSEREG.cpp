#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k;
        if (n + k <= m)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}