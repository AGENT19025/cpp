#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if((n==1) || (n==0))
    {
        return n;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}

int32_t main()
{
    int n,i=0;
    cin>>n;
    while(i<n)
    {
        cout<<" "<<fib(i);
        i++;
    }
    return 0;
}