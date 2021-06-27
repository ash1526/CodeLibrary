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


int main() 
{
    io;
    ll t;// cin >> t;
    t=1;
   
    while(t--)
    {
       ll n, x, n1; cin >> n;
       n1=n;
       vector<pair<ll,ll>> vp;
       vector<ll> ans , ans1;
       vp.pb(make_pair(0,0));
       rep(i, 1, 10)
       {
           cin >> x; vp.pb(make_pair(x, i));
       }

      
      
       ll maxind=LLONG_MIN, minval=LLONG_MAX;
       
       rep(i, 1, 10)
       {
           if(vp[i].first<=minval and vp[i].second>maxind)
           maxind=vp[i].second, minval=vp[i].first;
       }
     //  cout << maxind << " "<< minval << endl;
       
       while(n1>=minval)
       {
           ans.pb(maxind);
           n1-=minval;
       }
       // print(ans);
       
       ll rem=n%(minval), rem1;
       rem1=rem;
      // cout<< rem1<< endl;
       
       if( minval>n) {cout<< -1<< endl; break;}
       
       rep(i, 0, ans.size())
       {
           ll tempmin, tempmax=LLONG_MIN, f=0;
           
           for(ll j=9; j>=1; j--)
           {
              if(rem1>=(vp[j].first - vp[maxind].first) and vp[j].second>tempmax and rem1!=0 )
              {
                  //cout<< vp[j].first - vp[ans[i]].first << " ";
                  //cout<< rem1<< endl;
                  tempmax=vp[j].second;
                  rem1 = rem1 -(vp[j].first - vp[maxind].first);
                  f=1;
                  if(rem1==0) {f=0; break; }
              }
           }
           if(tempmax!=LLONG_MIN) ans1.pb(tempmax);
           if(f==0) break;
       }
    //   cout<< endl;
       
      // print(ans1);
       rep(i, 0, ans1.size()) ans.pop_back();
       rep(i, 0, ans1.size()) ans.pb(ans1[i]);
       sort(all(ans), greater<ll>());
      rep(i, 0, ans.size()) cout<< ans[i];
      cout<< endl;
    }
	return 0;
}