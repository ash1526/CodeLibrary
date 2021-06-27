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
ll raised(ll x,  ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
ll raisedmod(ll x, ll y, ll p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
ll gcd(ll a, ll b) { if (b == 0)return a; return gcd(b, a % b);} 
ll fact(ll n){ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; } 
ll nCr(ll n, ll r){ return fact(n) / (fact(r) * fact(n - r));} 
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;
#define mod 1e9+7

int main() 
{
    io;
    ll arr[1000001]={0};
        ll sum=1, cur=1;
        ll count=0;
       
       while(sum<1000001)
       {
           
            arr[sum]=cur;
            arr[sum-1]=cur+1;
            cur++;
            sum+=cur;
            count++;
            if(count>1000001) break;
       }
      
      
 
    rep(i, 1, 1000001)
    {
       // cout<< arr[i]<< " "<< arr[i-1]<< endl;
        if(arr[i]==0 && arr[i-1]%2==0)
        {
           ll j=i;
           while(arr[j]==0)
           {
               arr[j]=arr[i-1]+1;
               j++;
           }    
           
        }
        else if(arr[i]==0 && arr[i-1]%2==1)
        {
           ll j=i;
           while(arr[j]==0)
           {
              arr[j]=arr[i-1]+1;
               j++;
           }
        }
    }
    ll t; cin >> t;
    //t=1;
   // rep(i, 1, 21) cout<< i << " "<< arr[i]<< endl;
    while(t--)
    {
        ll n; 
        cin >> n;
    
        cout<< arr[n] << endl;
  
    }
	return 0;
}
