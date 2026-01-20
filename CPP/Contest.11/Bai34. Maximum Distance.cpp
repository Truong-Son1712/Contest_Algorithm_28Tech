#include<iostream> 
#include<map>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int res=-1;
	int a[n+1];
	map<int,int>mp;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		if(mp.count(a[i]-k)) res=max(res,i-mp[a[i]-k]); 
		if(mp.count(a[i]+k)) res=max(res,i-mp[a[i]+k]);
		if(mp.count(a[i])==0) mp[a[i]]=i; 
	} 
	cout<<res;
	return 0; 
}
