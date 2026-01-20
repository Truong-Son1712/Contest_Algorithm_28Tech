#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	auto it=upper_bound(a,a+n,x);
	auto it2=it-1;
	if(*it2==x) cout<<it2-a;
	else cout<<-1;
	return 0; 
}
