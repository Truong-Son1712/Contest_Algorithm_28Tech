#include<iostream>
#include<set>
#include<vector> 

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	int a[n];
	set<int> se, se2,hop; 
	vector<int> giao; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		se2.insert(a[i]);
		hop.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		int num; cin>>num;
		se.insert(num); 
		hop.insert(num); 
	} 
	for(int i=0;i<n;i++){
		if(se.count(a[i])!=0){
			giao.push_back(a[i]);
			se.erase(a[i]); 
		}
	} 
	for(int i=0;i<giao.size();i++){
		hop.erase(giao[i]); 
	} 
	for(auto x: hop)
		cout<<x<<" "; 
	return 0; 
}
