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


int main() 
{

    #ifndef ONLINE_JUDGE 
	    freopen("input.txt", "r", stdin); 
	    freopen("output.txt", "w", stdout); 
    #endif 
    io;
    ll t; cin >> t;
	// t=1;
    while(t--)
    {
        vector<ll> v, v1;
        ll n, x; cin >> n;
        rep(i, 0, n) 
        {
            cin >> x;
            v.pb(x);
        }
        
        if(n==2) cout<<  1 << endl;
        else 
        {
            v1.pb(1);
            rep(i, 1, n)
            {
                ll count=1;
                if( i+1<n  && v[i+1]>v[i] )
                {
                    ll j=i+1;
                    while(j<n && v[j]>v[j-1]  ) { count++; j++; }
                 //   cout<< count<< endl;
                    i=j-1;
                }
                v1.pb(count);
            }
            //
          //  print(v1);
           // cout<< v1.size()<< endl;
            vector<ll> vans;
            vans.pb(1);
            ll j=1;
            rep(i, 1, v1.size())
            {
                ll prev=vans[i-1], count=0;
                while(j<v1.size() && prev--)
                {
                    count+=v1[j];
                    j++;
                }
                if(j>=v1.size()) break;
                vans.pb(count);
            }
            
        cout<< vans.size() << endl;
        }
    }
	return 0;
}

