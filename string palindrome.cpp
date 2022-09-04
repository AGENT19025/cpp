#include<bits/stdc++.h>
using namespace std;
string ispali(string s)
{
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r)
    {
        return "yes";
    }
    else{
        return "no";
    }
    
}
int32_t main()
{
    string s;
    cin>>s;
    cout<<ispali(s);
    return 0;

}