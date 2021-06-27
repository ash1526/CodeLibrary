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
    	char a;
	    ll n, b; cin >> n;
	    vector<pair<char, ll>> vp;
	    rep(i, 0, 2*n)
		{
			cin >> a;
			if(a=='+')
			{
				vp.pb(make_pair(a, 0));
			}
			else
			{
				cin >> b;
				vp.pb(make_pair(a, b)); 
			}
		}

		ll j=0, f=0;
		stack<ll> s;
		rep(i, 0, 2*n)
		{
			if(s.empty() && vp[i].first=='-')
			{
				cout<< "NO\n"; return 0;
			}
			else if(vp[i].first=='+')
			{
				s.push(i);
			}
			else 
			{
				vp[s.top()].second=vp[i].second;
				s.pop();
			}
		}

		
		set<ll> val;
		rep(i, 0, 2*n)
		{
			if(vp[i].first=='+')
			{
				val.insert(vp[i].second);
			}
			else 
			{
				ll temp=*val.begin();
				val.erase(temp);
				if(vp[i].second!=temp)
				{
					cout<< "NO\n";
					return 0;
				}
			}
		}
		
			cout<< "YES\n";
			rep(i, 0, 2*n)
			{
				if(vp[i].first=='+')
					cout<< vp[i].second<<" ";
			}
	}
	return 0;
}
