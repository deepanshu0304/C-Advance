#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string T;

        for (float i = 0; i < n; i++)
        {
            if (i <= ((n - 1) / 2.0))
            {
                if (s[i] == '0')
                    T = s[i] + T;
                else
                    T = T + s[i];
            }
            if (i < ((n - 1) / 2.0))
            {
                if (s[n - 1 - i] == '0')
                    T = T + s[n - 1 - i];
                else
                    T = s[n - 1 - i] + T;
            }
        }
        cout<<T<<endl;
    }
    return 0;
}