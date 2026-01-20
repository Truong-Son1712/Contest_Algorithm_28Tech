#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main() 
{
	string s; getline(cin, s);
	string world;
	vector<string> v;
	stringstream ss(s);
	while(ss>>world){
		v.push_back(world); 
	} 
	cout<<v.size();
	return 0; 
}
