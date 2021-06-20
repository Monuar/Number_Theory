#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define mod 1000000007
ll phi(ll n)
{
    ll res=n;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            res/=i;
            res*=(i-1);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){
        res/=n;
        res*=(n-1);
    }
    return res;
}
int main()
{
	IOS;
	ll t,n;
	cin>>t;
	while(t--){
            cin>>n;
        cout<<phi(n)<<endl;
	}

}
