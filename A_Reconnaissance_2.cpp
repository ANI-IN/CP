#include <bits/stdc++.h>
#include <iostream>
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
    int x,y;


    for(int i=1;i<n;i++)
    {
        int temp=abs(arr[i]-arr[i-1]);

        if(temp<mini)
        {
            x=i-1;
            y=i;
            mini=temp;
        }
    }

    int temp=abs(arr[0]-arr[n-1]);
     if(temp<mini)
        {
            x=n-1;
            y=0;
            mini=temp;
        }


    cout<<x+1<<" "<<y+1<<endl;
   
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