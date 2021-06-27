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
   
    ll t; //cin >> t;
    t=1;
    ll prime[100006];
    rep(i, 0, 100006) prime[i]=1;
    prime[0]=prime[1]=0;
    rep(i, 2, 100006)
    {
        if(i*2<100006)
        {
            for(ll j= i*2; j<100006;j+=i) prime[j]=0;
        }
    }
    ll prev=0;
    for(ll i=100006; i>=0; i--){ if(prime[i]==1) prev=i;  else if(prev!=0 and prime[i]==0) prime[i]=prev;  }
    while(t--)
    {
       ll n, m; cin >> n >> m;
       ll arr[n][m];
       ll ans[n][m];
        rep(i, 0, n){
           rep(j, 0, m){
             cin >> arr[i][j];
           }
       }
       
       rep(i, 0, n){
           rep(j, 0, m){
               if(prime[arr[i][j]]==1) ans[i][j]=arr[i][j];
               else ans[i][j]=prime[arr[i][j]];
           }
       }
       
       ll ansmin=LLONG_MAX;
       rep(i, 0, n){
           ll val=0;
           rep(j, 0, m){
             val+=ans[i][j]-arr[i][j];
           }
           if(val<ansmin) ansmin=val;
       }
       
       rep(i, 0, m){
           ll val=0;
           rep(j, 0, n){
             val+=ans[j][i]-arr[j][i];
           }
           if(val<ansmin) ansmin=val;
       }
       
       cout<< ansmin << endl;
    }
    return 0;
}