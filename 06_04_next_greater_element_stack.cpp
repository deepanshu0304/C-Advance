#include<bits/stdc++.h>
using namespace std;
void NGE(vector<int> v){
    stack <int> s;
    vector <int> nge(v.size());
    for(int i =0;i<v.size();i++){
        while(v[i]>v[s.top()] && !s.empty()){
            nge[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
    nge[s.top()] = -1;
    s.pop();
    }
 
     for(int i =0;i<nge.size();i++){
        if(nge[i] == -1) cout<<"-1"<<" ";
        else 
        cout<<v[nge[i]]<<" ";
       }

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
      NGE(v);

      
    return 0;
}