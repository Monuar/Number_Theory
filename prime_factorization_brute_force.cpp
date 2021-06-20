#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
void PrimeFact()
{
    ll n;
    cin>>n;
    for( ll i=2;i<=n;i++){
        if(n%i==0){
            ll cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<" "<<cnt<<endl;
        }

    }
}
int main()
{
    PrimeFact();
}
