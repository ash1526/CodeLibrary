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
        ll n; cin >> n;
        string s;
        vector<string> v;
        rep(i, 0, n) {
            cin >> s;
            v.pb(s);
        }
       /* rep(i, 0, n){
            cout<< v[i] <<endl;
        }*/
        string first=v[0], second=v[1];
        string third=v[n-1], fourth=v[n-2];
        
        ll one=0;
        if(first[1]=='1') one++;
        if(second[0]=='1') one++;
        if(third[n-2]=='1') one++;
        if(fourth[n-1]=='1') one++;
        
        if(one==0|| one ==4){
            cout<< 2 << endl;
            cout<< 1 << " " << 2 << endl;
            cout<< 2 <<  " " << 1 << endl;
        }
        else if(one==1){
            cout<< 1 << endl;
            if(first[1]=='0' && second[0]=='0')
            {
                if(third[n-2]=='1') cout<< n-1 << " "<< n << endl; 
                else cout<< n << " "<< n-1 << endl;
            }
            else {
                if(first[1]=='1') cout<< 2 << " "<< 1 << endl;
                else cout<< 1<< " "<< 2<< endl;
            }
        }
        else if(one==2){
            if(first[1]=='0' && second[0]=='0' ||first[1]=='1' && second[0]=='1' ) cout<< 0<< endl;
            else {
                if(first[1] == third[n-2] ) {
                    cout<< 2 << endl; 
                    cout<< 1 << " "<< 2 << endl;
                    cout<< n-1 << " " << n << endl;
                }
                else {
                    cout<< 2 << endl;
                    cout << 2 << " "<< 1 << endl;
                    cout<< n-1 << " "<< n << endl;
                }
            
            }
        }
        else {
            if(first[1]==second[0]) 
            {
                if(third[n-2]!=first[1]) {
                    cout<< 1 <<endl;
                    cout<< n-1<<" "<< n << endl;
                }
                else{
                    cout<< 1 << endl;
                    cout<< n << " "<< n-1 << endl;
                }
            }
            else {
                if(first[1]==third[n-2])
                {
                    cout<< 1 << endl;
                    cout<< 1 <<" "<< 2 << endl;
                }
                else{
                    cout<<1 << endl;
                    cout<< 2 << " "<< 1 << endl;
                }
            }
        }
        
    }
    return 0;
}