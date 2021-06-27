#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define pb push_back
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define all(s) s.begin(),s.end()
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define rr(v) for(auto &val:v)
#define _max(v) *max_element(v.begin(), v.end())
#define _min(v) *min_element(v.begin(), v.end())
#define ms(s, n) memset(s, n, sizeof(s))
#define print(v) for(ll i=0; i<v.size(); i++) {cout<<v[i]<< " ";} cout<< endl;
ll raised(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll raisedmod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define mod 1e9+7


int main()
{
    io; 
    ll t; cin >> t;
    while(t--)
    {
        ll n, l,x; cin >> n >> l;
        vector<double> a;
        rep(i,0, n) {cin >> x; a.pb(x);}
        double c1, c2;
        ll i=0, j=n-1, count=0;
        double ans=0, e=l, s1=1, s2=1, s=0;
        while(count<n){
            c1=(a[i]-s)/s1;
            c2=(e-a[j])/s2;
            if(c1<c2){
                ans+=c1;
                s=a[i];
                e-=c1*s2;
                s1++;
                i++;
            }
            else if(c1>c2){
                ans+=c2;
                e=a[j];
                s2++;
                s+=c2*s1;
                j--;
            }
            else {
                ans+=c2;
                s=a[i];
                e=a[j];
                i++;
                j--;
                s1++;
                s2++;
                count++;
            }
            count++;
        }
        if(s<e) ans+=(e-s)/(s1+s2);
        printf("%.10lf\n", ans);
        
    }
    return 0;
}
//sarthakoherwal 