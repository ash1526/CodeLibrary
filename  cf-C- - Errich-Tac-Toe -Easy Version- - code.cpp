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
    ll t; cin >> t;
    //t=1;
    while(t--)
    {
        ll n; cin>> n;
        char mat[n][n], matans[n][n];
        vector<string> s;
        string inp;
        rep(i, 0, n)
        {
            cin >> inp;
            s.pb(inp);
        }
        
        rep(i, 0, n)
        {
            rep(j, 0, n)
            {
                mat[i][j]=s[i][j];
                matans[i][j]=s[i][j];
            }
        }
    
     ll zero=0, one=0, two=0;   
        rep(i, 0, n)
        {
            rep(j, 0, n)
            {
                if(abs(i-j)%3==0)
                {matans[i][j]='O';
                if(mat[i][j]=='X') zero++;}
                
                if(abs(i-j+1)%3==0)
                {matans[i][j]='1';
                if(mat[i][j]=='X') one++;}
                
                if(abs(i-j+2)%3==0)
                {matans[i][j]='2';
                if(mat[i][j]=='X') two++;}
            }
        }

       char ch;
       if(one<=two && one<=zero) {ch='1';}
       else if(two<=one && two<=zero) ch='2';
       else ch='O';
       
       rep(i, 0, n)
       {
           rep(j, 0, n)
           {
               if(mat[i][j]=='X' && matans[i][j]==ch)
               mat[i][j]='O';
           }
       }
       
       rep(i, 0, n)
       {
           rep(j, 0, n)
           {
              cout<< mat[i][j];
           }
           cout<< endl;
       }
        
    }
	return 0;
}

/* created matans and tagged every third ele with either one two or three then checked for lowest value among 
three in in mat and matans then changed the mat accordingly
edi.
*/
