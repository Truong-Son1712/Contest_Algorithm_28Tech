#include<iostream> 
#include<algorithm>

using namespace std;

int main() 
{
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	auto it=upper_bound(a,a+n,x); 
	if(it!=a){
		auto it2=it-1;
		cout<<*it2<<" " ;
	} 
	else cout<<-1; 
}
