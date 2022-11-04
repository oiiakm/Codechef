#include <iostream>
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
        for (int i = 1; i <= n; i++)
        {
            c = c + i;
        }
        if (c % 2 == 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << n - 1 << endl;
        }
    }

    return 0;
}
