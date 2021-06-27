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
        ll n, m;
        cin >> n >> m;
        char arr[n][m];
        ll prestar[n][m+1];
        ll countans=0;
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                cin >> arr[i][j];
                if(arr[i][j]=='*') countans++;
            }
        }
        
        rep(i, 0, n)
        {
            ll sum=0;
            prestar[i][0]=0;
            rep(j, 0, m)
            {
                if(arr[i][j]=='*') sum++;
                 prestar[i][j+1]=sum;
            }
        }
      
         rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                if(arr[i][j]=='*')
                {
                   ll row=i+1, col=j;
                   ll cur=1, curcount=0;
                   while(col-cur>=0 && col+cur<=m-1 && row<=n-1)
                   {
                       curcount=0;
                       curcount+=prestar[row][col+cur+1]-prestar[row][col-cur];
                       if(curcount==col+cur+1-(col-cur)) 
                       {
                           countans++;
                       }
                       else {break;}
                       cur++;
                       row++;
                   }
                  
                }
            }
        }
        cout<< countans << endl;
    }
	return 0;
}
// used prefix sum concept to remove tle, as we were iterating over same values again and again.
