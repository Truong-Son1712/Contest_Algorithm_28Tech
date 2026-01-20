#include<iostream>
#include<algorithm> 
#include<vector>
#include<set> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n+1];
	multiset<long long> se; 
	long long dp[n+1];;
	dp[0]=0; 
	long long sum=0; 
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		sum=(sum+a[i]%n+n)%n; 
		dp[i]=sum;  
	} 
	int res=0;
	for(int i=0;i<=n;i++){
		int num=se.count(dp[i]);
		res+=num; 
		se.insert(dp[i]); 
	} 
	cout<<res; 
	return 0; 
}
