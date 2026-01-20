#include<iostream>
#include<string>
#include<set>
#include<vector> 

using namespace std;

int main() 
{
	string s1,s2; cin>>s1>>s2;
	set<char> se1,se2;
	vector<char> giao; 
	for(int i=0;i<s1.size();i++)
		se1.insert(s1[i]);
	for(int i=0;i<s2.size();i++) {
		se2.insert(s2[i]);
		if(se1.count(s2[i])) giao.push_back(s2[i]); 
	}
	for(int i=0;i<giao.size();i++){
		se1.erase(giao[i]);
		se2.erase(giao[i]); 
	} 
	for(auto x:se1) cout<<x;
	cout<<endl;
	for(auto x:se2) cout<<x;
	return 0;  
}
