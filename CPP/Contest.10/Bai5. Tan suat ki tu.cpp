#include<iostream>
#include<map>
#include<vector> 

using namespace std;

int main() 
{
	int n; cin>>n;
	map<char,int> mp;
	vector<char> v; 
	for(int i=0;i<n;i++){
		char x; cin>>x;
		mp[x]++; 
	} 
	auto it=mp.begin();
	cout<<(*it).first<<" "<<(*it).second<< endl;
	cout<<endl; 
	auto it2=mp.rbegin();
	cout<<(*it2).first<<" "<<(*it2).second<< endl;
	cout<<endl;
	for(auto it=mp.begin();it != mp.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
		v.push_back((*it).first); 
	}
	cout<<endl; 
	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i]<<" "<<mp[v[i]]<<endl; 
	return 0; 
}
