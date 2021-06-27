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
       map<ll, ll> mp;
       vector<ll> v;
       ll n, x, k;
       cin >> n>> k;
       rep(i, 0, n)
       {
           cin >> x;
           v.pb(x);
           mp[x]++;
       }
       ll value=LLONG_MIN, value1=LLONG_MIN;
      // cout<< mp[1]<< " " << mp[2]<< endl;
     vector<ll> maxval;
      for(auto &it: mp)
      {
          if(it.second > value) {value=it.second; value1=it.first;}
      }
       
        for(auto &it: mp)
      {
          if(it.second = value) {maxval.pb(it.first);}
      }
    //  cout << maxval.size() <<  endl;
     
      ll maxcount=LLONG_MAX;
      vector<ll> v1;
      
      rep(a, 0, maxval.size())
      {
           ll count=0;
            v1=v;
          rep(i, 0, n)
          {
              if(v1[i]!=maxval[a])
              {
                  ll j=i; 
                  rep(m, j, min(n, j+k)) {v1[m]=maxval[a]; if(j+1>=n) break;}
                  count++;
                  i=j;
              }
           //  cout<< count << endl; 
          }
          if(count< maxcount) maxcount=count;
          
      }
       cout << maxcount << endl;
      }
	return 0;
}
