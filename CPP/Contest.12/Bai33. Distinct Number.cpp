#include<iostream> 
#include<set>

using namespace std;

int main() 
{
	int n; cin>>n;
	set<int> se;
	int a[n]; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		se.insert(a[i]) ;
	} 
	cout<<se.size() ;
	return 0; 
}
