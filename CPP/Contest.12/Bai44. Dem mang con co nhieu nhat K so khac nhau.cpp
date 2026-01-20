#include<algorithm>
#include<iostream>
#include<map>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	map<int,int> mp;
	int l=0,cnt=0;
	long long res=0;
	for(int r=0;r<n;r++){
		mp[a[r]]++;
		if(mp[a[r]]==1) cnt++;
		if(cnt>k){
			while(cnt>k){
				mp[a[l]]--;
				if(mp[a[l]]==0) cnt--;
				l++; 
			} 
		}
		res+=r-l+1; 
	} 
	cout<<res;
	return 0; 
}
