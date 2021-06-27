#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define inf LLONG_MAX
#define ninf LLONG_MIN
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rr(v) for(auto &val:v)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
ll power(ll x,  ll y){ll ans = 1;while (y > 0){ if (y & 1){ans = ans*x;} y = y>>1;x = x*x;}return ans;}
ll powermod(ll x, ll y, ll p){int ans = 1;x = x % p;while (y > 0){if (y & 1){ans = (ans*x) % p;}y = y>>1; x = (x*x) % p;}return ans;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll ans = 1; for (ll i = 2; i <= n; i++) ans = ans * i; return ans; } 
ll ceel(ll x,ll y) {return (x+y-1)/y;}
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
     ll x, n, k;
      cin>>n>>k;
	  vector<ll> v(n);
	  rep(i, 0, n){
	      cin >>v[i];
	  }
	
	  
	  ll prev=v[0], ans=0, curr=0;
	  vector<ll> precal(n+1,0);
	  
	  precal[0]=v[0];
	  rep(i, 1, n)
	  {
		  precal[i]=precal[i-1]+v[i];
		  ll tempans=0, val=ceel(v[i]*100,k);
		  
		  if(val>precal[i-1])
		  {
			  tempans=ceel(v[i]*100,k);
			  tempans-=precal[i-1];
			  ans+=ceel(v[i]*100,k);
			  ans-=precal[i-1];
			  precal[i]=precal[i]+tempans;
		  }
	  }
	  cout<<ans<<endl;
    }
	return 0;
}