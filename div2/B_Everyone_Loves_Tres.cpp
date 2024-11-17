#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 3)
            cout << "-1\n";
        else if (n == 4)
            cout << "3366\n";
        else
        {
            string s;
            for (int i = 1; i <= n; i++)
            {
                if (i == 1 || i == 2 || i == 4)
                    s += '6';
                else
                    s += '3';
            }

            for (int i = n - 1; i >= 0; i--)
                cout << s[i];
            cout << endl;
        }
    }

    return 0;
}
