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
        ll a, b;  cin >> a >> b;
        string s; cin >> s;
        
        ll i=0, count=0;
        
        while(s[i]=='0') {count++; i++;}
        
        ll cnt=0;
        vector<ll> v;
        rep(j, count, s.size())
        {
            cnt=0;
            if(s[j]=='1')
            {
                ll k=j;
                while(s[k]=='1') {cnt++; k++;}
                j=k-1;
            }
            else 
            {
               ll k=j;
                while(s[k]=='0') {cnt++; k++;}
                j=k-1;
            }
            v.pb(cnt);
           // cout<< 2 << endl;
        }
        if(v.size()%2==0) v.pop_back();
       // print(v);
        ll ans=0;
       if(count==s.size()) {cout<< 0<< endl; }
        else if(v.size()==1) cout<< a << endl;
        else 
        {
            rep(j, 1, v.size())
            {
                
                 ans+=a;
                 if(j%2==1)
                 {
                        ll k=j, cnt=0;
                       while( k<v.size() && v[k]*b < a)
                       {
                           cnt+=v[k];
                            k+=2;
                       }
                    //   cout<< ans << endl;
                       ans+=(cnt*b);
                        j=k;
                    
                 }
                 if(j==v.size()-2) {ans+=a; break;}
                 else {j++;}
            }
            cout<< ans << endl;
        }
        
        
    }
	return 0;
}
