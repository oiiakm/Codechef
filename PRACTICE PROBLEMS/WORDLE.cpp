#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string h, g, m = "";
        cin >> h;
        cin >> g;
        for (int i = 0; i < h.size(); i++)
        {
            if (h[i] == g[i])
            {
                m = m + "G";
            }
            else
            {
                m = m + "B";
            }
        }
        cout << m << "\n";
    }
    return 0;
}
