#include<iostream>
#include<map>

using namespace std;

int main() 
{
	map<int,int> mp;
	mp.insert({1,100});
	mp.insert({2,100});
	mp[1]=200; 
	for(pair<int,int> x:mp) 
		cout<<x.first<<" "<<x.second<<endl; 
	cout<<mp.count(1) ;
}
