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
    ll presum[1000][3];
    rep(i, 0, 1000) {
        rep(j, 0, 200) {
            rep(k, 0, 143) {
                presum[i][0]=0; presum[j][1]=0; presum[k][2]=0;
            }
        }
    }
       
    rep(i, 0, 333) { 
        rep(j, 0, 200) {
          //  cout<< "yes";
            rep(k, 0, 143) {
                ll val=i*3+5*j+k*7;
                if(val<=1000){   
                    presum[val][0]=i;
                    presum[val][1]=j;
                    presum[val][2]=k;
                }
                
            }
        }
       // cout<< "yea";
    }
    //t=1;
    while(t--)
    {
      ll n; cin >> n;
      if(presum[n][0]==0 &&presum[n][1]==0 &&presum[n][2]==0  ) cout<< -1 << endl;
      else cout << presum[n][0]<<" "<<  presum[n][1]<< " " << presum[n][2]<< endl;
    }
    return 0;
}