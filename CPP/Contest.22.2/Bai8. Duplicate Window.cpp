#include<iostream>
#include<set> 

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	bool ok=false;
	set<int> se; 
	for(int i=0;i<k;i++) se.insert(a[i]);
	if(se.size()<k){
		cout<<"YES";
		return 0; 
	} 
	for(int i=k;i<n;i++){
		se.insert(a[i]);
		se.erase(a[i-k]);
		if(se.size()<k){
			cout<<"YES";
			return 0; 
		} 
	} 
	cout<<"NO";
	return 0; 
}
