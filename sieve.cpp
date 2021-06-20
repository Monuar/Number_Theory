#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
ll isprime[1000001];
//vector<ll>v;
using namespace std;
vector<ll>v;
void sieve()
{
    ll maxN=1000000;
    for(int i=1;i<=maxN;i++) isprime[i]=1;
    isprime[0]=isprime[1]=0;
    for(int i=2;i*i<=maxN;i++){
        if(isprime[i]){
            for(int j=i*i;j<=maxN;j=j+i){
                isprime[j]=0;
            }
        }
    }
    for(int i=0;i<=maxN;i++){

        if(isprime[i]==1)

            v.push_back(i);
    }
    for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";

}
int main()
{
    sieve();
}
