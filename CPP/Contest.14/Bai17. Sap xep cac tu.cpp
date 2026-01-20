#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm> 

using namespace std;

int main() 
{
	string s; getline(cin,s);
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout<<v[i]<<" "; 
	cout<<endl; 
	sort(v.begin(),v.end(),greater<string>());
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	return 0; 
}
