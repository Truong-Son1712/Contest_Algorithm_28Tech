#include<iostream>
#include<string>
#include<vector>
#include<sstream> 
 
using namespace std;

int main() 
{
	string s; cin>>s;
	stringstream ss(s); 
	string world; 
	vector<string> v;
	while(getline(ss,world,'/')){
		v.push_back(world); 
	}
	for(int i=0;i<v.size();i++){
		if(v[i].size()==1) v[i].insert(0,"0"); 
	} 
	for(int i=0;i<v.size();i++){
		cout<<v[i];
		if(i!=v.size()-1) cout<<'/'; 
	} 
	return 0; 
}
