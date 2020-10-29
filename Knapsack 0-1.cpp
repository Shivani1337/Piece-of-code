/*
Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1]
which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity,find out the maximum value subset of val[]
such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).
*/


#include<bits/stdc++.h>
#define ll long
using namespace std;
ll knapsack(ll W,ll n,ll wt[],ll val[])
{
	vector<vector<ll> >dp(n+1, vector<ll>(W+1,0));
	
	for(ll i=0;i<=n;i++)
	{
		for(ll w=0;w<=W;w++)
		{
			if(i==0||w==0)
			dp[i][w]=0;
			else if(wt[i]<=w)
			dp[i][w]=max(val[i]+dp[i-1][w-wt[i]], dp[i-1][w]);
			else
			dp[i][w]=dp[i-1][w];	
		}
	}
	return dp[n][W];
}
int main()
{
	ll n,W;
	cin>>n>>W;
	ll val[n+1];
	ll wt[n+1];
	for(ll i=1;i<=n;i++)
	{
	cin>>wt[i]>>val[i];
	}
	cout<<knapsack(W,n,wt,val);
}
