#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rr(v) for(auto &val:v)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
#define print(v) for(ll i=0; i<v.size(); i++) {cout<<v[i]<< " ";} cout<< endl;
ll raised(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll raisedmod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define mod 1e9+7

int main()
{
    io; 
    ll t; cin >> t;
    //t=1;
    ll fib[1000006];
    rep(i, 0, 1000006) fib[i]=1;
    fib[0]=fib[1]=0;
    rep(i, 2, 1000006)
    {
        if(i*2<1000006)
        {
            for(ll j= i*2; j<1000006;j+=i) fib[j]=0;
        }
    }
    
    vector<ll> tprime;
    rep(i, 0, 1000006) {if( fib[i]==1) tprime.pb(i*i);}
 //   rep(i, 0, 100) if(tprime[i]==1) cout<< i<< " ";
    while(t--)
    {
       
            ll x; cin >> x;
            if(binary_search(all(tprime), x)) cout<< "YES\n";
            else cout<< "NO\n";
        
    }
    return 0;
}