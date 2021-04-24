#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(i, a, b) for(ll i=a; i<b; i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define print(v) rep(i, 0, v.size()) cout<< v[i]<< " "; cout<< endl;


vector<ll> printPascal(ll n)
{
	vector<ll> ans;
	ll dp[n+1][n+1];
	
	//initialisaton
	rep(i, 0, n) dp[i][0]=1;
	dp[0][0]=1;

	rep(i, 1, n){
		rep(j, 1, i+1){
			if(j==i) dp[i][j]=1;
			else dp[i][j]=dp[i-1][j-1] + dp[i-1][j];
		}
	}

	rep(i, 0, n) ans.pb(dp[n-1][i]);
	return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ll n; cin >>n;
	vector<ll> ans=printPascal(n);
	print(ans);
	return 0;
}