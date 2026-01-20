#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map> 

using namespace std;

string chuyen(int n) 
{
	string s,t; 
	while(n>0){
		int du=n%10;
		s+='0'+du;
		n/=10; 
	} 
	for(int i=0;i<s.size();i++)
		t+=s[s.size()-1-i]; 
	return t; 
}
string mk(string s) 
{
	string pass;
	string world;
	stringstream ss(s);
	vector<string> v;
	while(getline(ss,world,'/')) {
		v.push_back(world); 
	}
	if(v[0][0]=='0')v[0].erase(v[0].begin());
	pass+=v[0]; 
	if(v[1][0]=='0')v[1].erase(v[1].begin());
	pass+=v[1]; 
	pass+=v[2];
	return pass; 
}
string chuyenthuong(string s) 
{
	for(int i=0;i<s.size();i++) s[i]=tolower(s[i]); 
	return s; 
}
string chuyenmail(vector<string> v) 
{
	string mail;
	mail+=chuyenthuong(v[v.size()-2]); 
	for(int i=0;i<v.size()-2;i++) mail+=tolower(v[i][0]);
	return mail; 
}
int main() 
{
	int n; cin>>n;
	cin.ignore(1);
	map<string,int> mp; 
	while(n--){
		string s;getline(cin,s);
		string world;
		stringstream ss(s);
		vector<string> v;
		while(ss>>world){
			v.push_back(world); 
		} 
		string mail=chuyenmail(v);
		mp[mail]++; 
		if(mp[mail]!=1) mail+=chuyen(mp[mail]); 
		mail+="@xyz.edu.vn";
		string pass=mk(v[v.size()-1]); 
		cout<<mail<<endl;
		cout<<pass<<endl; 
	} 
	return 0; 
}
