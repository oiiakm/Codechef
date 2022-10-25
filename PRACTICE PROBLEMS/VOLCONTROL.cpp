#include <iostream>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x > y)
        {
            cout << x - y << endl;
        }
        else
        {
            cout << y - x << endl;
        }
    }
    return 0;
}