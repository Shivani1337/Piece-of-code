/*
Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum
*/
#include<bits/stdc++.h>
using namespace std;
int subsetSum(vector<int> &A, int sum) {
    int n=A.size();
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
                dp[i][j]=0;
            if(j==0)
                dp[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(A[i]<=j)
            {
                dp[i][j]= dp[i-1][j-A[i-1]] || dp[i-1][j];
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int TargetSum;
	cin>>TargetSum;
	cout<<subsetSum(v,TargetSum);
}
