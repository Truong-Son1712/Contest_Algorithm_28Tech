#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	auto it1=lower_bound(a,a+n,x);
	if(it1!=a+n) cout<<it1-a<<endl;
	else cout<<-1<<endl; 
	auto it2=upper_bound(a,a+n,x);
	if(it2!=a+n) cout<<it2-a<<endl;
	else cout<<-1<<endl;
	if(binary_search(a,a+n,x)){
		cout<<it1-a<<endl;
		auto it3=it2-1;
		cout<<it3-a<<endl; 
		cout<<it3-it1+1; 
	} else{
		cout<<-1<<endl<<-1<<endl<<0; 
	} 
	return 0; 
}
