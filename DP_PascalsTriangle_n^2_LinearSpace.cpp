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
	ll dp[n+1];
	memset(dp, 0, sizeof(dp));

	dp[0]=1;
	rep(i, 0, n){
		for(ll j=i; j>0; j--){
			if(j==i or j==0) dp[j]=1;
			else dp[j]=dp[j]+dp[j-1];
		}
	}

	rep(i, 0, n) ans.pb(dp[i]);
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
/*
input:
5
output:
1 4 6 4 1
*/