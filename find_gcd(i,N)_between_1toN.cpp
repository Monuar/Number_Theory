#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define mod 1000000007
ll gcd(ll a,ll b)
{
    if(b==0)  return a;
    else return (b,b%a);
}
ll gcd(ll n)
{
    ll res=0;
    for(ll i=1;i<=n;i++){
        res+=gcd(i,n);
    }
    return res;
}
int main()
{
	IOS;
	ll n;
	cin>>n;
	cout<<gcd(n)<<endl;
}
