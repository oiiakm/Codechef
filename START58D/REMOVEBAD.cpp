#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
            mp[a[i]]++;

        int maxFreq = INT_MIN;

        for (auto x : mp)
            maxFreq = max(maxFreq, x.second);

        cout << (n - maxFreq) << "\n";
    }
    return 0;
}