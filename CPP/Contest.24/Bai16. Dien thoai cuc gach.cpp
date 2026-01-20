#include<iostream>
#include<string>
#include<map>
#include<vector> 
#include<string>
 
using namespace std;

string s; 
map<int,string> mp; 
char res[100]; 
vector<string> v; 
void ktao() 
{
	mp.insert({2,"abc"});
	mp.insert({3,"def"});
	mp.insert({4,"ghi"});
	mp.insert({5,"jkl"});
	mp.insert({6,"mno"});
	mp.insert({7,"pqrs"});
	mp.insert({8,"tuv"});
	mp.insert({9,"wxyz"}); 
}
void Try(int i)
{
	string x= mp[s[i]-'0']; 
	for(int j=0;j<x.size();j++){
		res[i]=x[j]; 
		if(i==s.size()-1){
			string t;
			for(int u=0;u<=s.size()-1;u++){
				t+=res[u]; 
			} 
			v.push_back(t); 
		}else{
			Try(i+1); 
		} 
	}
}
int main() 
{
	cin>>s; 
	ktao();
	Try(0);
	for(auto x:v){
		cout<<x<<" "; 
	}  
	return 0; 
}
