#include<iostream>
#include<math.h>
#include<map>
#include<vector> 

using namespace std;

int main() 
{
	int c=1e9+7; 
	int n; cin>>n;
	map<int,int> mp; 
	for(int i=2;i<=n;i++){
		int x=i; 
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
	for(auto x: mp){
		res*=(x.second+1);
		res%=c; 
	}
	cout<<res;
	return 0; 
}
