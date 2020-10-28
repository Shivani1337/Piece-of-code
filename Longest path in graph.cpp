/*
Given a directed graph G with N vertices and M edges. The task is to find the length of the longest directed path in Graph.

Note: Length of a directed path is the number of edges in it.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> adj[100005];
vector<bool>visited(100005, false);
vector<ll>dp(100005, 0);
void dfs(int node){
	visited[node]=true;
	for(auto x: adj[node]){
		if(visited[x]==false){
			dfs(x);
		}
		dp[node]=max(dp[node], 1+dp[x]);
	}
}
int main(){
	ll n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		if(!visited[i])
			dfs(i);
	}
	ll ans=0;
	for(int i=1;i<=n;i++)
	ans=max(ans,dp[i]);
	cout<<ans;
	
}
