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

    io;
    ll t, cnt=0; //cin >> t;
    t=1;
    while(t--)
    {
        ll n;
        cin >> n;
        string ans, s, ans1="", ans2=""; cin >> s;
        ll f=0;
        rep(i, 0, s.size())
        {
          //  cout<< s[i]<< " " <<ans1.size() << " "<< endl;
            if(ans1.size()==0) {ans1+=s[i]; ans+='0';}
            else if(s[i]<ans1[ans1.size()-1] && ans2.size()==0) {ans2+=s[i]; ans+='1';}
            else if(s[i]>=ans1[ans1.size()-1]) {ans1+=s[i]; ans+='0';}
            else if(s[i]>=ans2[ans2.size()-1]) {ans2+=s[i]; ans+='1';}
            else {f=1; break;}
        }
       // cout<< endl;
        //cout<< ans << endl;
        if(f) cout<< "NO\n";
        else {cout<< "YES\n"<< ans << endl;}
    }
	return 0;
}
