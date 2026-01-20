#include<iostream> 
#include<map> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	map<long long ,int> mp;
	mp[0]=1;
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i];
		if(mp[sum]==1){
			cout<<"1";
			return 0; 
		}
		mp[sum]=1; 
	} 
	cout<<"-1";
	return 0; 
}
