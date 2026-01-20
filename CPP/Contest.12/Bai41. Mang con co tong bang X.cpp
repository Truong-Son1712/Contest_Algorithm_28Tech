#include<iostream>
#include<algorithm> 

using namespace std;

int main() 
{
	int n,x; cin>>n>>x;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	long long dp[n+1];
	dp[0]=0; 
	long long sum=0; 
	for(int i=1;i<=n;i++){
		sum+=a[i];
		dp[i]=sum; 
	} 
	int res=0; 
	for(int i=1;i<=n;i++){
		if(binary_search(dp,dp+n+1,dp[i]-x)) res++; 
	} 
	cout<< res;
	return 0; 
}
