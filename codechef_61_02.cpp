#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    string s;
   int x=0;
    for(int i =0;i<n-1;){
        if(s[i] == s[i+1])
        {
            x++;
        }
      
         
            i++;

    }
    cout<<x-1<<endl;}
    return 0;
}