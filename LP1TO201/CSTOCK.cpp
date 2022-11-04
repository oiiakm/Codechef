#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int s, a, b;
        double c1, c;
        cin >> s >> a >> b >> c;
        c1 = s + ((c * s) / 100);
        if (c1 >= a && c1 <= b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
