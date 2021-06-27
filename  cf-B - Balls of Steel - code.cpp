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
       ll n, m;
       vector<pair<ll, ll>> vp;
       cin >> n >> m;
       ll x, y;
       rep(i, 0, n)
        {
            cin >> x >> y;
            vp.pb(make_pair(x, y));
        }   
        
        ll xmax1, ymax1, xmax2, ymax2, maxdist=LLONG_MIN, count=0;
        rep(i, 0, n)
        {
            count=0;
            rep(j, 0, n)
            {
                if(i!=j)
                {
                    if(abs(vp[i].first-vp[j].first) + abs(vp[i].second-vp[j].second )<=m  ) 
                    {   
                      // cout<<  abs(vp[i].first-vp[j].first) + abs(vp[i].second-vp[j].second )<< " ";
                      //  cout<< vp[i].first<< " " << vp[i].second << " " << vp[j].first<<" "<<  vp[j].second<< " "<< endl;
                        count++;
                    
                    }
                }
            }
          if(count==n-1) break;
        }
       if(count==n-1) cout<< 1 << endl;
       else cout<< -1 << endl;
    }
	return 0;
}
