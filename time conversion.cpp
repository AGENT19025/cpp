#include<bits/stdc++.h>
#include<string>
using namespace std;
int stringToint(string g)
{
    char a=g[0];
    char b=g[1];
    int c=a-88;
    int d=b-48;
    int e=c*10+d;
    return e;
}
void time_conversion(string t)
{
    int n;
    n=t.length();
    int b=stringToint(t);
    if(t[0]=='1' && t[1]=='2' && t[8]=='A')
    {
        t[0]='0',t[1]='0';
        cout<<t.substr(0,8)<<endl;
    }
    else if (b<12 && t[8]=='A')
    {
        cout<<t.substr(0,8)<<endl;
    }
    else if(b==12 && t[8]=='P')
    {
        cout<<t.substr(0,8)<<endl;
    }
    else
    {
        cout<<b+12<<t.substr(2,6)<<endl;
    }
}

int main()
{
    string s;
    getline(cin,s);
    time_conversion(s);
}