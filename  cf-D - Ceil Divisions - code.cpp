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

int main() 
{
    io;
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        ll n, n1, count=0; 
        cin >> n;
        n1=n;
        vector<pair<ll,ll>> vp;
        
        if(n1>9)
        {
            rep(i, 10, n1)
            {
                 vp.pb(make_pair(i, n)); count++;
            }
            
            ll val=n;
            while(val!=1)
            {
                vp.pb(make_pair(n, 9));
                count++;
                val=ceil((double)val/9);
            }
            
             rep(i, 4, 9 )
            {
                count++;
                vp.pb(make_pair(i, 9));
            }
            vp.pb(make_pair(9, 3));
            vp.pb(make_pair(9, 3));
    
            count+=2;
        }
        else if(n>3)
        {
            rep(i, 4, n)
            {
                vp.pb(make_pair(i, n));
                count++;
            }
            
            ll val=n;
            while(val!=1)
            {
                vp.pb(make_pair(n, 3));
                count++;
                val=ceil((double)val/3) ;
               // cout<< "yes"<< val << endl;
            }
        }
        
        count+=2;
        vp.pb(make_pair(3, 2));
        vp.pb(make_pair(3, 2));
        cout<< count << endl;
        rr(vp)
        {
            cout<< val.first << " "<< val.second << endl;
        }
    }
	return 0;
}