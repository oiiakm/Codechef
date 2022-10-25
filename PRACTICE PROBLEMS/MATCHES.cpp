#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, r, c = 0;
        int m[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        cin >> a >> b;
        int x = a + b;
        while (x != 0)
        {
            r = x % 10;
            c = c + m[r];
            x = x / 10;
        }
        cout << c << "\n";
    }
    return 0;
}
