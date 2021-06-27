#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll mod=1e9+7;
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
ll fact(ll n){ll res = 1; for (ll i = 1; i <= n; i++) res = (res * i)%mod; return res%mod; } 
ll nCr(ll n, ll r){ return fact(n) / ((fact(r) * fact(n - r))%mod);} 

int main() 
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 
    io;
    ll t;// cin >> t;
    t=1;
    while(t--)
    {
    	ll n, x, pos;cin >> n>> x >> pos;
    	vector<ll> v;

    	rep(i, 0, n)
    	{
    		v.pb(i+1);
    	}

    	ll lo=0, hi=v.size(), key=pos, big=0, small=0;

    	while(lo<hi)
    	{
    		ll mid=(lo+hi)/2;
    		//if(key==mid) break;
    		if(key<mid) {	hi=mid;  big++;  }
    		else { lo=mid+1; if(mid!=key)small++;}

    	}
	ll ans=1;
   // cout<< big<<" "<< small<< endl;
    	rep(i, n-x-big+1, n-x+1)
    	{
    		ans=(ans*i)%mod;
    		
    	}

    	rep(i, x-1-small+1, x-1+1)
    	{
    		ans=(ans*i)%mod;	
    	}

    	rep(i, 1, n-big-small-1+1)
    	{
    		ans=(ans*i)%mod;	
    	}
    	cout<< ans << endl;
    	
    }
	return 0;
}
// find places thru which we get to the key

// adding a extra condition if(mid!=key) small++; otherwise wa
