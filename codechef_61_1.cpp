#include <iostream>
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
        int x = 0;
        for (int i = 0; i <n;)
        {
                int c = 0;
                int k = 0;
            if (s[i] == 0)
            {
                for (int j = i; j <n; j++)
                {

                    if (s[j] == 0)
                    {
                        k++;
                    }
                    else
                    {
                        break;
                    }
                }
                x = x + k - 1;
                         
             
            }
            else
            {
                for (int j = i; j <n; j++)
                {

                    if (s[j] == 1)
                    {
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
                x = x + c - 1;
                         
            }
            i=i+k+c;
        }

        cout << x << endl;
    }
    return 0;
}
