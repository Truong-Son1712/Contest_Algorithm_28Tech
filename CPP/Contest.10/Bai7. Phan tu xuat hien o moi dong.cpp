#include<iostream>
#include<set>
#include<map>

using namespace std;

int main() 
{
	int n; cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		set<int>check;
		for(int j=0;j<n;j++){
			int x; cin>>x;
			if(check.count(x)==0){
				mp[x]++;
				check.insert(x); 
			} 
		} 
	} 
	bool kiemtra =false;
	for(auto x:mp){
		if(x.second==n){
			kiemtra=true;
			cout<<x.first<<" "; 
		} 
	} 
	if(kiemtra==0) cout<<"NOT FOUND";
	return 0; 
}
