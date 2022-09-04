#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n,m=0,flag=0;
    cin>>n;
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            cout<<"n is not a prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"n is a prime number"<<endl;
    }
    return 0;
}