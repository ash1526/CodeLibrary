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
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
ll power(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll powermod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll ceel(ll x,ll y) {return (x+y-1)/y;}
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7

ll powert(ll n)
{
  if(n==0) return 0;
  while(n!=1)
  {
      if(n%2!=0) return 0;
      n/=2;
  }
  return 1;
}

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        ll x, a, b, k;
        cin >> a >> b >> k;
        map<ll, ll> mp1, mp2;
        rep(i, 0, k)
        {
            cin >> x;
            mp1[x]++;
        }
        rep(i, 0, k)
        {
            cin >> x;
            mp2[x]++;
        }
        //print(v1); print(v2);
        ll count=0;
        rr(mp1)
        {
            if(val.second>=2) count+= (val.second * (val.second-1))/2;
        }
        rr(mp2)
        {
            if(val.second>=2) count+= (val.second * (val.second-1))/2;
        }
        cout<< (k*(k-1))/2 - count << endl;
    }
	return 0;
}