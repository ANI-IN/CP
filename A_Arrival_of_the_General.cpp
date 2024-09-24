#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mini=INT_MAX;
    int maxi=INT_MIN;
    int mini_index=-1;
    int maxi_index=-1;

    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i])
        {
            maxi_index=i;
            maxi=arr[i];
        }
        if(mini>=arr[i])
        {
            mini_index=i;
            mini=arr[i];
        }
    }
    int time=0;
    
    time+=maxi_index;
    time+=n-1-mini_index;
    if (maxi_index > mini_index) {
        time--;
    }
    cout<<time;
 

}


int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    
    while (T--)
    {
        solve();
    }
    return 0;
}