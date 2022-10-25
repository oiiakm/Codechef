#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int v = 0;
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                v++;
            }
            else
            {
                v = 0;
            }
            if (v > 2)
                break;
        }
        if (v > 2)
        {
            cout << "Happy" << endl;
        }
        else
        {
            cout << "Sad" << endl;
        }
    }
    return 0;
}