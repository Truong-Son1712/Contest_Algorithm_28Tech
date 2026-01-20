#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() 
{
	string s; cin>>s;
	map<char,int> mp;
	for(char x:s) mp[x]++;
	int n=s.size();
	for(auto x:mp){
		int ts=x.second;
		if(n%2==0&&ts>n/2){
			cout<<"NO";
			return 0; 
		} 
		else if(n%2!=0&&ts>(n/2+1)){
			cout<<"NO";
			return 0; 
		} 
	}
	cout<<"YES";
	return 0; 
}
