#include <bits/stdc++.h>
using namespace std;

int arr[10][10];
int main()
{

    int x, y;
    cin >> x >> y;
    arr[x][y] = 1;
    if ((x == 1) && (y == 1))
    {
        arr[2][3] = 2;
    }
    if ((x == 1) && (y == 8))
        arr[2][6] = 2;
    if ((x == 8) && (y == 1))
        arr[7][3] = 2;
    if ((x == 8) && (y == 8))
        arr[7][6] = 2;

    if ((2 <= x <= 7) && (3 <= y <= 6))
    {
        arr[x + 1][y - 2] = 2;
        arr[x - 1][y + 2] = 2;
    }
    if(1<x<8 && y==1){
       arr[x-1][3]=2;
       arr[x+1][3]=2;
    }
    if(1<x<8 && y==8){
       arr[x-1][6]=2;
       arr[x+1][6]=2;
    }
    if((x==1) && (1<y<7))
        arr[3][y+1]=2;
        arr[3][y-1]=2;
    if((x==8) && (1<y<7))
        arr[6][y+1]=2;
        arr[6][y-1]=2;
        

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}