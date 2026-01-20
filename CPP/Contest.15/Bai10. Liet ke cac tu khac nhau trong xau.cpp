#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<set> 

using namespace std;

int main() 
{
	string s; getline(cin, s);
	string world;
	vector<string> v;
	stringstream ss(s);
	while(ss>>world){
		v.push_back(world); 
	} 
	set<string> se;
	for(int i=0;i<v.size();i++) se.insert(v[i]);
	for(auto x:se) cout<<x<<" ";
	cout<<endl;
	for(int i=0;i<v.size();i++){
		if(se.count(v[i])){
			cout<<v[i]<<" ";
			se.erase(v[i]); 
		} 
	}  
	return 0; 
}
