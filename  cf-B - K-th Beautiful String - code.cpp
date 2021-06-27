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

// fucking 3 has to be handled separated!!! x|
int main()
{
    io;
    ll t; cin >>t;
    vector<ll> presum;
    ll sum=1;
    presum.pb(sum);
    rep(i, 2, 100005) {sum+=i; presum.pb(sum);}
    while(t--)
    {
         ll n, k; cin >> n >> k;
         ll val1= lower_bound(all(presum), k)-presum.begin();
         ll val2= (k-1)%presum[val1-1];
        // cout<< val1+1 <<" "<< val2 << endl;
         if(k==3 ) val2=1;
         string s;
         rep(i, 0, n) s+='a';
         s[val1+1]='b';
         s[val2]='b';
         reverse(all(s));
         cout<< s << endl;
    }

    return 0;
}