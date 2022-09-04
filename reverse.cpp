#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=1;i<=n;i++)
    {
        cout<<s[n-i];
    }
    return 0;
}