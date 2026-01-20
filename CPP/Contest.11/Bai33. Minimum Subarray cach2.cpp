#include<iostream>
#include<map>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n+1];
	map<long long,int> mp;
	mp[0]=0; 
	long long sum=0;
	int res=1e9; 
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		sum+=a[i];
		if(mp.count(sum-k))
			res=min(res,i-mp[sum-k]);
		mp[sum]=i; 
	} 
	if(res!=1e9) cout<<res;
	else cout<<-1;
	return 0; 
}
