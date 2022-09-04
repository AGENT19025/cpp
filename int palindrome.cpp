#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n,temp,sum=0,r;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp) cout<<"n is pali";
    else cout<<"n is not pali";
    return 0;
    
}