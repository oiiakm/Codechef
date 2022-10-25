
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y, r;
    cin >> x >> y;
    if (x % 5 == 0 && y >= x + 0.5)
    {
        cout << y - 0.5 - x << endl;
    }
    else if (x > y)
    {
        cout << y << endl;
    }
    else
    {
        cout << y << endl;
    }
}