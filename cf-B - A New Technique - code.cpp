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
    
    io;
    ll t; cin >> t;
    //t=1;	
    while(t--)
    {
    	ll x, y, n, m;
  		vector<ll> adj[505], adj1[505];
  		cin >>n >> m;
  		map<ll, ll> mp;
  		rep(i, 0, n)
  		{
  			rep(j, 0, m)
  			{
  				cin >> y;
  				adj[i].pb(y);
  				
  			}
  			
  		}

		rep(i, 0, m)
  		{
  			rep(j, 0, n)
  			{
  				cin >> y;
  				adj1[i].pb(y);
  			}
  			
  		}  	

  		ll val;
  		rep(i, 0, n)
  		{
  			mp[adj[i][0]]++;
  		}
  		rep(i, 0, m)
  		{
  			mp[adj1[i][0]]++;
  		}

  		for(auto &it: mp)
  		{

  			if(it.second==2)
  			{
  				val=it.first;

  				break;
  			}
  		}
		//cout<< val << endl;
  		vector<ll> v;
  		rep(i, 0, m)
  		{
  			if(adj1[i][0]==val)
  			{
  				rep(j, 0, n)
  				{
  					v.pb(adj1[i][j]);
  					
  				}
  				break;
  			}
  		}

  		//cout << v.size();
  		//rep(i,0,v.size()) cout<< v[i]<< " "; cout<< endl;

  		rep(i, 0, v.size())
  		{
  			rep(j, 0, v.size())
  			{
  				if(adj[j][0]==v[i])
  				{
  					rep(k, 0, m)
  					{
  						cout << adj[j][k]<<" ";
  					}
//   					cout<< endl;
					cout<<"\n";
  				}		
  			}
  		}
	}
	return 0; 			
}
