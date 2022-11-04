#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, c;
        cin >> n >> s;
        if (s <= n)
        {
            c = s;
        }
        else
        {
            c = (n - s) + n;
        }
        cout << c << endl;
    }
    return 0;
}
