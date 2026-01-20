#include<iostream>
#include<map>

using namespace std;

int main()
{
	int n; cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	map<long long,int> mp;
	mp[0]=0; 
	long long sum=0;
	int st=0,res=-1;
	for(int i=1;i<=n;i++){
		sum+=a[i];
		if(mp.count(sum)){
			int kc=i-mp[sum];
			if(kc>res){
				st=mp[sum]+1;
				res=kc; 
			} 
		} 
		if(mp.count(sum)==0) mp[sum]=i; 
	} 
	if(res==-1) cout<<"NOT FOUND";
	else{
		for(int i=st;i<st+res;i++)
			cout<<a[i]<<" "; 
	} 
	return 0; 
}
