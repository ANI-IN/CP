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


    int chest=0,biceps=0,back=0;
    for(int i=0;i<n;i++)
    {
        if(i%3==0)
        {
            chest+=arr[i];
        }
        else if(i%3==1)
        {
            biceps+=arr[i];
        }
        else if(i%3==2)
        {
            back+=arr[i];
        }
    }

    //cout<<chest<<" "<<biceps<<" "<<back;
    vector<pair<int,string> > ans;
    ans.push_back(make_pair(chest,"chest"));
    ans.push_back(make_pair(biceps,"biceps"));
    ans.push_back(make_pair(back,"back"));

    string maximum_excercise="";
    int count=0;

    for(int i=0;i<ans.size();i++)
    {
        if(count<ans[i].first)
        {
            count=ans[i].first;
            maximum_excercise=ans[i].second;
        }
    }

    cout<<maximum_excercise;
    
    
    

   
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