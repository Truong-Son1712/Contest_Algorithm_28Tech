#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n); 
	int Q; cin>>Q; 
	while(Q--){
		int L,R; cin>>L>>R;
		auto it1=lower_bound(a,a+n,L);
		auto it2=upper_bound(a,a+n,R);
		auto it3=it2-1;
		cout<<it3-it1+1<<endl; 
	} 
	return 0; 
}
