#include<iostream>
#include<math.h>
#include<map> 

using namespace std;

int main() 
{
	int n; cin>>n;
	map<int,int> mp; 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				mp[i]++; 
				n/=i; 
			} 
		} 
	} 
	if(n>1) mp[n]++;
	if(mp.size()>=3){
		cout<<"YES";
		return 0; 
	}
	else if(mp.size()==2){
		int summu=0;
		for(auto x:mp){
			summu+=x.second; 
		} 
		if(summu>=4) cout<<"YES";
		else cout<<"NO"; 
	} 
	else{
		int mu=0;
		for(auto x:mp){
			mu=x.second;
		}
		if(mu>=5) cout<<"YES";
		else cout<<"NO"; 
	} 
	return 0; 
}
