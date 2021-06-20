#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
vector<ll>v;
ll arr[1000001];
void sieve()
{
    int maxN=1000000;
    for(int i=1;i<=maxN;i++){
        arr[i]=-1;
    }
    for(int i=2;i*i<=maxN;i++){
        if(arr[i]==-1){
            for(int j=i;j<=maxN;j+=i){
                arr[j]=i;
            }
        }
    }
}
int main()
{
    sieve();
    ll n;
    cin>>n;
    vector<pair<int,int>>v;

    while(n>1){
        ll largest=arr[n];
        ll cnt=0;
        while(n%largest==0){
            cnt++;
            n/=largest;
        }
        v.push_back({largest,cnt});
    }
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
