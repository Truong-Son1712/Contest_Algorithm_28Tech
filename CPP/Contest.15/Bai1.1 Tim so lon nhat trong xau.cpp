#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

long long chuyen(string s) 
{
	long long n=0;
	for(int i=0;i<s.size();i++){
		n=n*10+s[i]-'0'; 
	} 
	return n; 
}
int main() 
{
	string s; getline(cin,s); 
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])) s[i]=' '; 
	} 
	stringstream ss(s);
	string world;
	vector<long long> v;
	while(ss>>world){
		v.push_back(chuyen(world)); 
	} 
	sort(v.begin(),v.end());
	cout<<v[v.size()-1];
	return 0; 
}
