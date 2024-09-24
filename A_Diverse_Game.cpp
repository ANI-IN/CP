#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > arr(n,vector<int>(m));
    vector<vector<int> > ans(n,vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    if(n==1 && m==1)
    {
        cout<<"-1"<<endl;
        return;
    }
    else if(n==1 && m>1)
    {
        for(int j=0;j<m-1;j++)
        {
            ans[0][j]=arr[0][j+1];
        }
        ans[0][m-1]=arr[0][0];   

    }
    else
    {
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=arr[i-1][j];
            }
        }

        for(int j=0;j<m;j++)
        {
            ans[0][j]=arr[n-1][j];
        }
    }
        


     for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }   
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