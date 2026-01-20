#include<iostream> 
#include<set>
#include<vector> 

using namespace std;

int main() 
{
	int n; cin>>n;
	set<int> se;
	vector<int> v; 
	for(int i=0;i<n;i++) {
		int num; cin>>num;
		se.insert(num); 
	}
	cout<<se.size()<<endl;
	
	for(auto it=se.begin();it!=se.end();it++)
		v.push_back(*it);
	cout<<v[v.size()-1]<<" "<<v[0]<<endl;
	cout<<v[v.size()-2]<<" "<<v[1]<<endl; 
	return 0; 
}
