#include<iostream>
#include<math.h>
#include<map>

using namespace std;

const int p=1e9+7; 
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	map<int,int>mp;
	for(int i=0;i<n;i++){
		int x=a[i];
		for(int j=2;j<=sqrt(x);j++){
			if(x%j==0){
				while(x%j==0){
					mp[j]++;
					x/=j; 
				} 
			} 
		} 
		if(x>1) mp[x]++; 
	} 
	long long res=1;
	for(auto x:mp){
		res*= (x.second+1);
		res%=p; 
	} 
	cout<<res;
	return 0; 
}
