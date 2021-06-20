#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int power(int b,int p)
{
    ll res=1;
    while(p){
        if(p%2){
            res*=b;
            p--;
        }
        else{
            b*=b;
            p/=2;
        }
    }
    return res;
}
int main()
{
    ll b,p;
    cin>>b>>p;
    cout<<power(b,p)<<endl;
}
