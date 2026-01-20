#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>

using namespace std;

int main() 
{
	string s; getline(cin,s) ;
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	map<string,int> mp; 
	for(int i=0;i<v.size();i++) mp[v[i]]++;
	for( auto x:mp) cout<<x.first<<" "<<x.second<<endl;
	cout<<endl;
	for(int i=0;i<v.size();i++) {
		if(mp[v[i]]){
			cout<<v[i]<<" "<<mp[v[i]]<<endl;
			mp[v[i]]=0; 
		}
	}
	return 0; 
}
