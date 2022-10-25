#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int d, flag = 0;
        string n;
        cin >> d;
        cin >> n;
        for (int i = 0; i < d; i++)
        {

            if (n[i] == '5' || n[i] == '0')
            {

                flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "No"
                 << "\n";
        }
        else if (flag == 1)
        {
            cout << "Yes"
                 << "\n";
        }
    }
}