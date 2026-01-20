#include<iostream>
#include<algorithm> 
#include<vector>
#include<set> 

using namespace std;

int main() 
{
	int n,x; cin>>n>>x;
	int a[n+1];
	multiset<long long> se; 
	long long dp[n+1];;
	dp[0]=0; 
	se.insert(dp[0]); 
	long long sum=0; 
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		sum+=a[i];
		dp[i]=sum; 
		se.insert(sum); 
	} 
	int res=0;
	for(int i=0;i<=n;i++){
		auto it=se.find(dp[i]);
		if(it!=se.end()) 
			se.erase(it); 
		int num=se.count(dp[i]+x);
		res+=num; 
	} 
	cout<<res; 
	return 0; 
}
