#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int maxi=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i!=n-1)
        maxi=max(maxi,arr[i]);
    }

    cout<<maxi+arr[n-1]<<endl;

     
   
   
}


int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
