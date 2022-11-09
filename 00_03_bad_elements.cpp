#include <iostream>
using namespace std;
const int N=1e5+10;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
int arr[N];
int hsh[N] = {0};
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	        hsh[arr[i]]++;
	    }
	    int max=0;
	    for(int i =1;i<=8;i++){
	        if(hsh[i]>=max) 
	        max=hsh[i];
	    }
	   
	    
	    cout<<(n-max)<<endl;
	}
	return 0;
}
