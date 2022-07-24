#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<long long int>> pattern(int n)
{
    vector<vector<long long int>>v;
    vector<long long int>t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
           t.push_back(v[i][j]); 
        }
        v.push_back(t);
    }
}

int main()
{
    long long int t;
    vector<vector<long long int>>r;
    cin>>t;
    r=pattern(t);
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}