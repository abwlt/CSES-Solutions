#include<bits/stdc++.h>
using namespace std;
#define task ""
#define endl '\n'
#define ll long long
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define getbit(n,i) (((n)>>(i))&1)
#define setbit(n,i) ((n)|(1ll<<(i)))
#define offbit(n,i) ((n)&(~(1ll<<(i))))
#define flipbit(n,i) ((n)^(1ll<<(i)))
#define cerrtime cerr << "\nTime elapsed: " << clock() * 1.0 / CLOCKS_PER_SEC << ".s";
signed main(void){
    fast
    ll n,ans=0;
    cin>>n;
    map<ll,bool> mp;
    while(n--)
    {
        ll r;
        cin>>r;
        if(mp[r]==false) 
            ans++,mp[r]=true;
    }
    cout<<ans;
    return 0;
}
