//code by vishwas 
//12-07-2022
#include<bits/stdc++.h>
#include<string>
#define ll long long int
#define ff first
#define ss second
#define len length()
#define nl "\n"
#define ld long double
#define pf push_front
#define pb push_back
#define mk make_pair
#define vb v.begin()
#define ve v.end()
#define vllp vector<pair< ll,ll > >
#define vs vector<string>
#define vslp vector<pair<string,ll>>
#define vlsp vector<pair<ll,string>>
#define vll vector<ll>
#define mp map<ll,ll>
#define mlli map<ll,ll>::iterator
#define msl map<string,ll>
#define msli map<string,ll>::iterator
#define r for(ll i=0;i<n;i++)
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void elepanth(int a)
{
    int d=a/5;
    if(a%5>0)
    {
        d++;
    }
    cout<<d<<endl;
}
int main()
{
    fast();
    ll e;
    cin>>e;
    elepanth(e);
    return 0;
}