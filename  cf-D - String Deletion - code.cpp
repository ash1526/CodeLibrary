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
    //t=1;
    while(t--)
    {
        string s;
        ll n; cin>>n >> s;
        vector<ll> v;
        rep(i, 0, s.size()){
            ll j=i, count=0; 
            while(s[j]==s[i] && j<s.size()) { j++; count++;}
            v.pb(count);
            i=j-1;
        }
       //print(v);
        ll ans=0;
        ll j=0, f=0;
        rep(i, 0, v.size())
        {
            if(v[i]>1) ans++; 
            else if(v[i]==1)
            {
                if(j<i) j=i;
                while(v[j]==1 && j+1<v.size()) j++;
                if(v[j]>1) {ans++; v[j]--;}
                else {i++; ans++;}
            }
        }
        cout<< ans << endl;
    }
    return 0;
}

// logic used: make arrray of repeating character: ex 111010 arr=3 1 1 1
//then using  two pointer check if current is greater than 1 then perform step1 and step2 on itself i.e ans++
// else find a arr[i] >1 decrease the val of arr[i] and increase   i.e ans++, v[j]--
// else check if j has reached end then all remaining are 1 so simplu remove 2 elements each time i.e i++, ans++