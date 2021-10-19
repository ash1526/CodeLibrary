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
#define mod 1e9+7

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        double n, w, x;
        vector<pair<double, double>> vp;
       cin >> n >> w;
       rep(i, 0, n)
        {
            cin >> x; vp.pb(make_pair(x, i));
        }       
        sort(all(vp));
        
        double sum=0, f=0;
        vector<double> v;
        rep(i, 0, n)
        { 
            if(vp[i].first>=w/2 && vp[i].first<=w) {cout<< 1 << endl << vp[i].second+1<< endl; f=1; break;}
            if(sum+vp[i].first<=w) {sum+=vp[i].first; v.pb(vp[i].second);}
           
                   }
        if(f==1) continue;
        if(sum>=w/2 && sum<=w)
        {
            sort(all(v));
            cout<< v.size()<< endl;
            rep(i, 0, v.size()) cout<< v[i]+1<< " "; cout<< endl;
        }
//         else cout<< -1 <<endl;
	    else cout<< -1 <<"\n";
        
    }
	return 0;
}
