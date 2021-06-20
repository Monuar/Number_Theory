#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define mod 1000000007
ll F[1000001];
ll power(ll a,ll n)
{
    ll res=1;
    while(n){
        if(n%2){
           res=(res*1LL*a)%mod;
           n--;
        }
        else{
            //n/=2;
        a=(a*1LL*a)%mod;
        n/=2;
        }
    }
    return res;
}
ll c(ll n,ll k)
{
    if(k>n) return 0;
    ll res=F[n];
    res=(res*1LL*power(F[k],mod-2))%mod;
    res=(res*1LL*power(F[n-k],mod-2))%mod;
    return res;
}
int main()
{
	IOS;
	F[0]=F[1]=1;
	for(ll i=2;i<=1000000;i++){
        F[i]=(F[i-1]*1LL*i)%mod;
	}
	ll q,n,k;
	cin>>q;
	while(q--){
        cin>>n>>k;
        cout<<c(n,k)<<endl;
	}

}
