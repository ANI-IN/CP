#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<"-1";
        return;
    }

    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        arr[i]=i;
    }

    for(int i=2;i<=n;i=i+2)
    {
        swap(arr[i],arr[i-1]);
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
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