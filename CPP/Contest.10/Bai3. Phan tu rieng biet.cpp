#include<iostream>
#include<set>

using namespace std;

int main() 
{
	set<int> se;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		if(se.count(x)==0){
			se.insert(x);
			cout<<x<<" ";} 
	} 
	
	return 0; 
}
