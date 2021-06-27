#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
ll raised(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll raisedmod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define mod 1e9+7
void print(vector<ll> v) {rep(i, 0, v.size()) cout<< v[i]<<" "; cout<< endl;}


int main() 
{

    #ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
    #endif 
    io;
    ll t; cin >> t;
	// t=1;
    while(t--)
    {
    	vector<pair<ll, ll>> vp;
    	vector<ll> v, v1;
    	ll n, x, y; cin >> n;

    	rep(i, 0, n) {cin >> x; v.pb(x);}
    	rep(i, 0, n) {cin >> x; v1.pb(x);}
    	rep(i, 0, n) {vp.pb(make_pair(v[i], v1[i]));}
    	
    	sort(all(vp));
    	reverse(all(vp));
    //	rep(i, 0, n) cout<< vp[i].first<< " "<< vp[i].second<< " "; cout<< endl;
    	
    	
    	ll ans=0, ind=0, sum=0;
    	vector<pair<ll, ll> > vp1;
    	rep(i, 0, n)
    	{
    	    sum+=vp[i].second;
    	   vp1.pb(make_pair(vp[i].first, sum));
    	}
        
        vector<ll> vans;
    	if(vp1[n-1].second< vp1[n-1].first) cout<< vp1[n-1].second << endl;
    	else 
    	{
    	  
    	    rep(i, 0, n)
    	    {
    	       vans.pb(min(vp1[i].first, vp1[i].second));
    	    }
    	    
    	    cout<< _max(vans) << endl;
    	}
        
    }

	return 0;
}

