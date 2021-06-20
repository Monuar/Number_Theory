#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define mod 1000000007
ll isprime[1000001];
vector<ll>primes;
void sieve()
{
    ll maxN=1000000;
    for(ll i=1;i<=maxN;i++) isprime[i]=1;
    isprime[0]=isprime[1]=0;
    for(ll i=2;i*i<=maxN;i++){
        if(isprime[i]){
            for(ll j=i*i;j<=maxN;j+=i){
                isprime[j]=0;
            }
        }
    }
    for(ll i=0;i<=maxN;i++){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
   // for(ll i=0;i<primes.size();i++) cout<<primes[i]<<" ";
}
void segment_sieve(ll L,ll R)
{
  if(L==1) L++;
  ll maxN=R-L+1;
  ll a[maxN+1]={0};
  for(ll p:primes)
  {
      if(p*p<=R){
        ll i=(L/p)*p;
        if(i<L) i+=p;
        for(;i<=R;i+=p){
            if(i!=p) a[i-L]=1;
        }
      }
  }
  for(ll i=0;i<maxN;i++){
    if(a[i]==0){
        cout<<L+i<<endl;
    }
  }

}
int main()
{
	IOS;
	sieve();
	ll T,L,R;
	cin>>T;
	while(T--)
    {
        cin>>L>>R;
        segment_sieve(L,R);
        cout<<endl;
    }
}
