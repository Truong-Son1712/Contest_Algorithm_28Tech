#include<iostream>
#include<set>

using namespace std;

int main() 
{
	set<int> se;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		se.insert(x); 
	} 
	int q; cin>>q;
	for(int i=0;i<q;i++){
		int num; cin>>num;
		if(se.count(num)!=0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	} 
	return 0; 
}
