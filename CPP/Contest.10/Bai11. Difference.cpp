#include<iostream>
#include<set>
#include<vector> 

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	int a[n];
	set<int> se, se2; 
	vector<int> hop; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		se2.insert(a[i]) ;}
	for(int i=0;i<m;i++){
		int num; cin>>num;
		se.insert(num); 
	} 
	for(int i=0;i<n;i++){
		if(se.count(a[i])!=0){
			hop.push_back(a[i]);
			se.erase(a[i]); 
		}
	} 
	for(int i=0;i<hop.size();i++){
		se2.erase(hop[i]) ;
	} 
	for(auto x: se2){
		cout<<x<<" "; 
	} 
	return 0; 
}
