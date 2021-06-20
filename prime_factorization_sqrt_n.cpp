#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
void PrimeFact()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ll cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }

            v.push_back(make_pair(i,cnt));
        }
    }
    if(n>1)v.push_back(make_pair(n,1));
    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main()
{
    PrimeFact();
}
