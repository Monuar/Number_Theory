#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define mod 1000000007
ll power(ll a,ll n,ll m)
{
    ll res=1;
    while(n)
    {
        if(n%2)
        {
            res=(res*a)%m;
            n--;
        }
        else{
            a=(a*a)%m;
            n/=2;
        }
    }
    //cout<<"Monuar"<<endl;
    return res;
}
int main()
{
    IOS;
    ll t,a,n,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>m;
       // cout<<"Monuar"<<endl;
        cout<<"a^-1 "<<power(a,m-2,m)<<endl;
    }
}
