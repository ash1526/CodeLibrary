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


#define MAX 1000001
int bit[MAX],n,q,a;
void update(ll i,ll vl)
{
	for(;i<=n;i+= i&-i)
		bit[i]+=vl;
}

ll query(ll i)
{
	ll sum=0;
	for(;i>0;i-= (i&-i))
		sum+=bit[i];
	return sum;
}

ll binary_search(ll x)
{
	ll ans, l=1, r=n;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		if(query(mid)>=x){
			ans=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	return ans;
}
int main() 
{

    #ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
    #endif 
    io;
    ll t; //cin >> t;
	t=1;
    while(t--)
    {
    	
    	ll  x;
    	cin >> n >> q;

    	rep(i, 0, n) {cin >> x; update(x,1); }
		ll ans;
//	rep(i, 1, n+1) cout<< bit[i]<<" "; cout<< endl;


    	rep(i, 0, q){
    		cin >> x;
    		if(x<0){
    			update(binary_search(-x), -1);
    		}
    		else update(x, 1);
    	}
    	if(query(n)==0) cout<< 0<< endl;
    	else cout<< binary_search(1)<< endl;
    }

	return 0;
}

