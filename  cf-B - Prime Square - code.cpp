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

int main() 
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    ll prime[100005];
    ms(prime, 0);


    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
    	ll n; cin >>n;
    	ll arr[n][n];
    	ll prime[100005];
    	ms(prime, 0);
    	prime[0]=-1;
    	prime[2]=-1;

    	rep(i, 2, 100005)
    	{
    		for(ll j=i*i; j<100005; j+=i)
    		{
    			prime[j]=-1;
    		}
    	}
    	vector<ll> v;

		rep(i, 0, 15000)
		{
			if(prime[i]==0) v.pb(i);
		}


    	rep(i, 0 , n)
    	{
    		rep(j, 0, n)
    		{
    			if(i!=j)
    			{
    				arr[i][j]=1;
    			}
    		}
    	}

		ll val;
    	rep(i, 0, v.size())
    	{
    		val=v[i]-(n-1);

    		if(find(all(v), val)==v.end() && val>0 && val!=2)
    		{
    			val=v[i]-(n-1); break;
    		}
		}

		//cout << val << endl;

    	rep(i, 0, n)
    		{
    			rep(j, 0, n)
    			{
    				if(i==j) arr[i][j]=val;
    			}
    		}

rep(i, 0, n)
    		{
    			rep(j, 0, n)
    			{
    				cout<< arr[i][j]<< " ";
    			}
    			cout<< endl;
    		}    	
    	
    	
    			
    }
	return 0;
}
