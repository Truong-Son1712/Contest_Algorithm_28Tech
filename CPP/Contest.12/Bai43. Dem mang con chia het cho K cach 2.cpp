#include<iostream>
#include<algorithm> 
#include<vector>
#include<map> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n+1];
	map<int,int> mp; 
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
		mp[dp[i]]++;
		int num=mp[dp[i]]-1;
		res+=num;  
	} 
	cout<<res; 
	return 0; 
}
