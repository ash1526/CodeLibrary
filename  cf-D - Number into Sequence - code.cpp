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

void primeFactors(ll n, vector<ll> &p) 
{ 
	while (n%2 == 0) 
	{ 
		p.push_back(2);
		n = n/2; 
	} 
    rep(i, 3, sqrt(n)+1)
	{ 
		while(n%i==0) 
		{ 
			p.push_back(i);
			n = n/i; 
		}
		i+2;
	} 
	if (n > 2) 
		p.push_back(n);
} 

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
       ll n; cin >> n;
    	vector<ll> p; 
    	primeFactors(n, p); 
    	if(p.size()==0) cout<< 1 << endl << n << endl;
    	else
    	{
        	map<ll, ll> mp;
        	rep(i, 0, p.size()) mp[p[i]]++;
        	ll maxval=LLONG_MIN, two=0, one;
        	for(auto &it: mp)
        	{
        	    if(it.second>maxval)
        	    {
        	       maxval = it.second;
            	   two=it.second;
            	   one=it.first;
        	    }
        	}
        	if(two==1)
        	{
        	    cout<< 1 << endl;
        	    cout<< n<< endl;
        	}
        	else 
        	{
        	    cout<< two << endl;
        	    ll mul=1;
        	    rep(i, 0, two-1) {cout<< one << " "; mul*=one;}
        	    cout<< n/mul << endl;
        	}
    	}
    }
	return 0;
}
