#include<iostream> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	long long dp[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0) dp[i]=a[i];
		else dp[i]=dp[i-1]+a[i]; 
	} 
	int Q; cin>>Q;
	while(Q--){
		int l,r; cin>>l>>r;
		--l;--r;
		if(l==0) cout<<dp[r]<<endl;
		else cout<<dp[r]-dp[l-1]<<endl; 
	} 
	return 0; 
}
