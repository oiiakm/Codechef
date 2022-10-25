#include <iostream>
using namespace std;

int main()
{
    int a[4];
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (a[i] >= 10)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}