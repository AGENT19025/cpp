#include<bits/stdc++.h>
using namespace std;
vector<int> CheapestRoundTrip(int NumCities , vector<vector<int>>FlightInfo)
{
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int t=0;
        cin>>t;
        v.push_back(t);
    }
    for(int i=1;i<n;i++)
    {
        int c=0;
        if(v[n-1]>v[n-i-1])
        {
            swap(v[n-1],v[n-i-1]);
            sort(v.begin()+(n-i),v.end());
            c++;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}