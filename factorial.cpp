#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n,sum=1;
    cin>>n;
    while(n>0)
    {

        sum*=n;
        n=n-1;
    }
    cout<<sum;
}