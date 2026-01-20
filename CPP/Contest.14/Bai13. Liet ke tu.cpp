#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main() 
{
	string s; getline(cin,s);
	for(char &x:s)
		if(x=='.'||x==','||x=='!'||x=='?')
			x=' '; 
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0; 
}
