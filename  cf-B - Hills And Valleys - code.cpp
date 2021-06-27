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
#define _max(v) *max_valment(v.begin(), v.end())
#define _min(v) *min_valment(v.begin(), v.end())
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
        vector<ll> v;
       ll n, x; cin >> n;
   
       rep(i, 0, n)
       {
           cin >> x; v.pb(x);
       }
       
        vector<ll> v1;
        ll ans=0;
        rep(i, 1, n)
        {
            if((i+1)<n and ((v[i-1]>v[i] and v[i+1]>v[i]) or (v[i-1]<v[i] and v[i+1]<v[i])))
            {
                //cout<< i+1 <<" "<< n << endl;
                v1.pb(i);
                ans++;
            }
        }
        
 //print(v1);
        ll minans=LLONG_MAX;
        
        rep(i, 0, v1.size())
        {
            ll left, right, left1, right1, cur, tempans, temp;
            
            temp=v[v1[i]];
            left=v[v1[i]-1];
            right=v[v1[i]+1];
            cur=v[v1[i]];
            
            cur=left;
            tempans=ans;
            tempans--;
            if(v1[i]-2>=0 and  ((left>temp and left>v[v1[i]-2]) or (left<temp and left<v[v1[i]-2])))
            {
                tempans--;
            }
            
            
            if(v1[i]+2<n and ((right>temp and right>v[v1[i]+2]) or (right<temp and right<v[v1[i]+2])))
            {
                if((right>cur and (right>v[v1[i]+2]) or (right<cur and right<v[v1[i]+2])))
                {
                    
                }
                else {tempans--;}//cout<< "yes\n"<< left;
            }
            else
            {
                if(v1[i]+2<n and ((right>cur and right>v[v1[i]+2]) or (right<cur and right<v[v1[i]+2]))) tempans++;
            }
            if(tempans<minans) minans=tempans;
            
            
            cur=right;
            tempans=ans;
            tempans--;
            if(v1[i]+2<n and ((right>temp and right>v[v1[i]+2]) or (right<temp and right<v[v1[i]+2])))
            {
                tempans--;   
            }
            if(v1[i]-2>=0 and ((left>temp and left>v[v1[i]-2]) or (left<temp and left<v[v1[i]-2])))
            {
                if((left<cur and left<v[v1[i]-2]) or(left>cur and left>v[v1[i]-2]))
                {
                    
                }
                else tempans--;
            }
            else
            {
                if(v1[i]-2>=0 and((left<cur and left<v[v1[i]-2]) or(left>cur and left>v[v1[i]-2]))) tempans++;
            }
            if(tempans<minans) minans=tempans;
            v[v1[i]]=temp;
            
            //cout << left << " "<< v[v1[i]] << " "<< right << " " << minans << endl;
        }
        if(minans==LLONG_MAX) cout << 0 << endl;
        else
        cout<< minans << endl;
    }
	return 0;
}
