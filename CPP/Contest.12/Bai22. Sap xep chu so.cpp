#include<iostream>
#include<set>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	set<int> se;
	for(int i=0;i<n;i++){
		if(se.size()==10) break; 
		int num=a[i],du=0;
		while(num>0){
			du=num%10;
			se.insert(du);
			num=num/10; 
		} 
	} 
	for(auto x:se) cout<<x<<" ";
	return 0; 
}
