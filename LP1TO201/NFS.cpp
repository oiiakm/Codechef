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
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        double c = sqrt((u * u) - 2 * (a * s));
        if (u == 1 && v == 1)
        {
            cout << "Yes"
                 << "\n";
        }
        else if (c > v)
        {
            cout << "No"
                 << "\n";
        }
        else
        {
            cout << "Yes"
                 << "\n";
        }
    }
    return 0;
}
