#include<iostream>
#include<map>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	map<int,int> mp;
	int l=0,res=1;
	for(int r=0;r<n;r++) {
		mp[a[r]]++;
		if(mp[a[r]]==2){
			while(mp[a[r]]==2){
				mp[a[l]]--;
				l++;
			} 
			res=max(res,r-l+1); 
		} 
	}
	cout<<res;
	return 0; 
}
