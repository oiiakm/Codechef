#include <iostream>
using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int k = 0; k < n; k++)
        {
            if (a[k] >= 1000)
                c++;
        }
        cout << c << "\n";
        c = 0;
    }

    return 0;
}
