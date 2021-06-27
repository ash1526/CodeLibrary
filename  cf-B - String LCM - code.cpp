#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define inf LLONG_MAX
#define ninf LLONG_MIN
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rr(v) for(auto &val:v)
#define _max(v) *max_valment(v.begin(), v.end())
#define _min(v) *min_valment(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
ll power(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll powermod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7
ll fun(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        string s1, s2;
        cin >> s1>> s2;
        ll maxval=max(s1.size(), s2.size()), minval=min(s1.size(), s2.size());
        ll value=fun(maxval, minval);
        
        vector<char> v1, v2;
        while(v1.size()<value)
        {
            rep(i, 0, s1.size())
            {
                v1.pb(s1[i]);
            }
        }
        while(v2.size()<value)
        {
            rep(i, 0, s2.size())
            {
                v2.pb(s2[i]);
            }
        }
        
        if(v1==v2)
        {
            rep(i, 0, v1.size())
            {
                cout<< v1[i];
            }cout<< endl;
        }
        else cout<< -1<< endl;
    }
	return 0;
}
