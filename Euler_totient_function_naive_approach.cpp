#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define mod 1000000007
ll phi(ll n)
{
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        if(__gcd(i,n)==1) cnt++;
    }
    return cnt;
}
int main()
{
	IOS;
	ll n;
	cin>>n;
	cout<<phi(n)<<endl;
}
