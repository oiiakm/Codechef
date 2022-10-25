#include <iostream>
using namespace std;
int main()
{
    int t;
    float x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x < y)
        {
            cout << "FIRST" << endl;
        }
        else if (x == y)
        {
            cout << "ANY" << endl;
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }
    return 0;
}