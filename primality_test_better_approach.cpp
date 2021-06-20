#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
bool isprime(ll n)
{
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(isprime(n)) cout<<"prime"<<endl;
    else cout<<"not prime"<<endl;
}
