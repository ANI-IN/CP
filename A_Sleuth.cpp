#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve1(string token,int &ans)
{   
    int i=token.size()-1;
    while(i>=0)
    {   
    
        if(isalnum(token[i]))
        {
            char x=token[i];
            
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' ||  x == 'E' || x == 'I' || x == 'O' || x == 'U' || x=='y' || x=='Y') 
            {
                ans=1;
            }
            else
            {
                ans=0;
            }
        break;
        }
        i--;
    }
}

void solve(){
    
    string str;
    getline(cin,str);
    string s = "aeiouyAEIOUY"; 
    
    stringstream ss(str);
    string token;
    int ans=0;

    while( ss >> token)
    {
       solve1(token,ans);
    }
   
    if(ans)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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