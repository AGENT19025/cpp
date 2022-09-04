#include<bits/stdc++.h>
using namespace std;

void removedup(int a[],int n)
{
    int i;
    set<int> s;
    for(i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();++it)
    {
        cout<<*it<<" ";
    }
}

int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    removedup(a,n);
    

}