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
ll power(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll powermod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7

set<ll> s;
vector<ll> v;

void createsum(ll low, ll hi)
{
    
    ll sum=0, ind=-1, midval;
    
    midval=(v[low]+v[hi])/2;
    rep(i, low, hi+1)
    {
        sum+=v[i];
    }
    s.insert(sum);
    
    rep(i, low, hi+1)
    {
        if(v[i]<=midval) ind=i;
        else break;
    }
    
    if(v[hi]-v[low]==0 ) return;
   
    createsum(low, ind);
    createsum(ind+1, hi);
}

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        s.clear();
        v.clear();
       ll n, q, x;
      
       cin >> n >> q;
       rep(i, 0, n)
       {
           cin >> x; v.pb(x);
       }
       
       sort(all(v));
       createsum(0, v.size()-1);
    
    /*   rr(s)
       {
         cout<< val<< " ";  
       } cout<< endl;
      */ 
       rep(i, 0, q)
       {
           cin >> x;
           if(s.find(x)!=s.end()) cout<<"Yes\n";
           else cout << "No\n";
       }
    }
	return 0;
}
