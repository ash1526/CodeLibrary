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

vector<ll> adj[2000005];
ll vis[2000005], color[2000005];

bool isbipartite(ll v, ll col)
{
vis[v]=1;
color[v]=col;

for(ll child: adj[v])
{
	if(vis[child]==0)
	{
		if(isbipartite(child, col^1)==false)
			return  false;
	}
	else 
	{
		if(color[v]==color[child]) return false;
	}
}

return true;
}

int main() 
{

    io;
    ll t, cnt=0; //cin >> t;
    t=1;
    while(t--)
    {
        cnt++;
    	ms(vis, 0);
    	ms(color, 0);
    	rep(i, 0, 2005) adj[i].clear();
    	vector<pair<ll,ll>> vp;
  		ll n, x, y, m; cin >>n >> m;
  		rep(i, 0, m)
  		{
  			cin >> x >> y;
  			adj[x].pb(y);
  			adj[y].pb(x);
  			vp.pb(make_pair(x, y));
  		}
  		
        ll f=0;
        rep(i, 1, n+1)
        {
          	if(vis[i]==0) 
          	{
          	    if(isbipartite(i,1))  continue;
                else {f=1; break;}
          	}
            
        }
    if(f) cout<< "NO\n";
    else {cout<< "YES\n"; 
       // rep(i, 1, n) {cout << color[i] << " "; cout<< endl;}
        string s="";
        rep(i, 0, vp.size())
        {
            if(color[vp[i].first]==1) s+='1';
            else s+='0';
        }
        cout<< s << endl;
    }
    
}
	return 0;
}
