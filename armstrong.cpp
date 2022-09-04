#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n,sum=0,r,temp;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,3);
        n=n/10;
    }
    if(temp==sum) cout<<"n is armstrong";
    else cout<<"n is not armstrong";
    return 0;
}
