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


// for minimising n-(x+y) x=draws, y=loses, so we maximise x+y and hence n-(x+y)decreases
int main()
{
    io; 
   
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
      string s;
      cin >> s;
      ll n=s.size();
      
      ll count=0;

      ll minval=LLONG_MAX,f=0;
            if(s.size()==1||s.size()==2) {cout<< 0<< endl; continue;}
      rep(i, 1, n-1)
      {
          ll j=i;
          count=1;
          while(s[j]==s[j+1]&& j+1<n) {j++; count++;}
          if(j+1<n && s[j+1]!=s[i-1] && s[j]!=s[i-1] && count+2<minval) {f=1; minval= count+2;}
          i=j;
      }
      if(f==0) cout << 0<< endl;
      else cout << minval << endl;
    }
    return 0;
}