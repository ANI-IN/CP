#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    vector<pair<int,int> > arr;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        int index=i;
        for(int j=0;j<n;j++)
        {   
            int end=arr[j].second;
            int home=arr[index].first;
            if(index!=j && end==home)
            {
                ans++;
            }
        }
    }
    cout<<ans;
   
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