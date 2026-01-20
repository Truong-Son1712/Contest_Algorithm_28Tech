#include<iostream>
#include<string>
#include<set>
#include<sstream> 

using namespace std;

int main() 
{
	string s; getline(cin,s);
	set<string> se;
	string world;
	stringstream ss(s);
	while(ss>>world){
		se.insert(world); 
	} 
	cout<<se.size()<<endl;
	cout<<*se.begin()<<" ";
	cout<<*se.rbegin();
	return 0; 
}
