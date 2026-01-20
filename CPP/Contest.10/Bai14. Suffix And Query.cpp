#include<iostream>
#include<set>

using namespace std;

int main() 
{
	int n; cin>>n; 
	int F[n], a[n];
	set<int> se;
	for(int i=0;i<n;i++)
		cin>>a[i]; 
	for(int i=n-1;i>=0;i--){
		se.insert(a[i]);
		F[i]=se.size(); 
	} 
	int Q; cin>>Q;
	for(int i=0;i<Q;i++){
		int L; cin>>L;
		cout<<F[L]<<endl; 
	} 
	return 0; 
}
