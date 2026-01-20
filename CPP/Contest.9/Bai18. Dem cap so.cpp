#include<iostream>
#include<algorithm>
#include<map>
 
using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i]; 
	sort(a,a+n);
	long long dem=0; 
	if(k!=0){
		for(int i=0;i<n;i++){
			if(binary_search(a,a+n,a[i]+k)){
				auto it1=lower_bound(a,a+n,a[i]+k);
				auto it2=upper_bound(a,a+n,a[i]+k);
				auto it3=it2-1;
				dem+=it3-it1+1; 
			}
		} 
	}else{
		map<int,int> mp;
		for(int i=0;i<n;i++) mp[a[n]]++;
		for(auto x: mp){
			dem+= (long long)x.second*(x.second-1)/2; 
		} 
	} 
	cout<<dem;
	return 0; 
}
