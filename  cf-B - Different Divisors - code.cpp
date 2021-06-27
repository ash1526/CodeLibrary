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
ll ceel(ll x,ll y) {return (x+y-1)/y;}
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7


#define MAX_SIZE 1000005
bool IsPrime[MAX_SIZE];
void SieveOfEratosthenes(vector<ll>& primes)
{

	memset(IsPrime, true, sizeof(IsPrime));

	for (ll p = 2; p * p < MAX_SIZE; p++) {
		if (IsPrime[p] == true) {
			for (ll i = p * p; i < MAX_SIZE; i += p)
				IsPrime[i] = false;
		}
	}

	for (ll p = 2; p < MAX_SIZE; p++)
		if (IsPrime[p])
			primes.push_back(p);
}
int main() 
{
    io;
    
    //t=1;
    vector<ll> ans, primes;
    primes.pb(2);
    SieveOfEratosthenes(primes); 
    
    //rep(i, 1, 20) cout<< primes[i]<< " "; cout<< endl;
    
   
   rep(d, 1, 10001)
   {
       ll a=1, b=0, c=0, j;
       rep(i, 0, primes.size())
       {
           if(primes[i]-a>=d)
           {
               b=primes[i];
               rep(j, i, primes.size())
               {
                   if(primes[j]-b>=d)
                   {
                       c=primes[j];
                       break;
                   }
               }
              break;
           }
       }
       
       
      // cout<< b << " "<< c << endl;
       ll val=b/gcd(b, c)*c;
       //cout<< val <<" "<< d << endl;
       ans.pb(val);
    }

   // print(ans);
    ll t; cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       
       cout<< ans[n-1]<< endl;
       
    }
	return 0;
}