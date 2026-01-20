#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(string a, string b)
{
	string ab=a+b;
	string ba=b+a;
	return ab>ba; 
}
int main() 
{
	int n; cin>>n;
	cin.ignore(1);
	string s; getline(cin,s);
	string world;
	stringstream ss(s);
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0; 
}
