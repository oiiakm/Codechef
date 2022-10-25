#include <iostream>
using namespace std;

int main()
{
    int t;
    // your code goes here
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, p = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (a == 2 || a == 3 || a == 9)
            {
                p++;
            }
            else if (j % 10 == 2 || j % 10 == 3 || j % 10 == 9)
            {
                p++;
            }
        }
        cout << p << "\n";
    }
    return 0;
}
