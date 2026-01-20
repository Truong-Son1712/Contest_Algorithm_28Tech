#include<iostream>
#include<map>
#include<string> 

using namespace std;

int main() 
{
	string s; cin>>s;
	map<char,int> mp;
	for(char x:s) mp[x]++;
	int deml=0,demc=0; 
	for(auto x:mp){
		if(x.second%2!=0) demc++; 
		else deml++; 
	}
	if((demc+deml)%2!=0) cout<<2;
	else cout<<1;
	return 0; 
}
