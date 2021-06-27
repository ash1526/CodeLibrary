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
ll raised(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll raisedmod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        ll q, n, l, r; cin >> n >> q; 
       string s, s1;
       cin >> s;
       rep(i, 0, q)
       {
           cin >> l >> r;
           s1="";
           rep(j, l-1, r)
           {
               s1.pb(s[j]);
           }
           
         //  cout<< s1<< endl;
           ll f=0;
           rep(k, 0, l-1)
           {
               if(s[k]==s1[0]) {f=1; break;}
           }
           rep(k, r, s.size())
           {
               if(s[k]==s1[s1.size()-1]) {f=1; break;}
           }
           if(f==0) cout<< "NO\n";
           else cout<< "YES\n";
       }
    }
	return 0;
}
