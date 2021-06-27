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
    while(t--)
    {
      ll m, n, ans=0; cin >> n >> m;
        ll v[n+1][m+1]={0};
      rep(i, 0, n ){
          rep(j, 0, m){
              cin >> v[i][j];
          }
      }
      ll f=0;
      rep(i, 0, (n+1)/2){
          rep(j, 0, (m+1)/2){
              vector<ll> v1;
              if(i!=n-i-1) v1.pb(v[i][j]), v1.pb(v[i][m-1-j]);
              v1.pb(v[n-i-1][m-1-j]), v1.pb(v[n-i-1][j]);
              sort(all(v1));
              rep(k, 0, v1.size()/2) {ans+=v1[v1.size()-k-1]-v1[k];
                  if(i==n-i-1 or j==m-1-j) break;
              }
          }
      }
      cout<< ans << endl;
     }

    return 0;
}