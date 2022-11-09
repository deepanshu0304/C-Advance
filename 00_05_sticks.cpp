#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
int pfx[N];

int main()
{

  int n;
  cin >> n;
  int sum;
  cin >> sum;

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    pfx[i] = pfx[i - 1] + arr[i];
  }

  int i = 1;
  int j = 2;
  int k =0;
  while (i <= n && j <= n)
  {
    if ( pfx[j] - pfx[i] == n)
    {
      cout << i+1 <<" "<<j+1;
      k=1;
      break;
      
    }
    else if (arr[j] - arr[i] < n)
      j++;
    else
      i++;
  }
if(k==0)
  cout << "No such pair";
  

return 0;
}