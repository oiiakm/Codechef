#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int c1 = 0, c2 = 0;
        int n;
        cin >> n;
        string a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == "START38")
            {
                c1++;
            }
            else if (a[j] == "LTIME108")
            {
                c2++;
            }
        }
        cout << c1 << " " << c2 << "\n";
    }
    return 0;
}
