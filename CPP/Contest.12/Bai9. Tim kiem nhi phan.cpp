#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for( int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	int q; cin>>q;
	while(q--){
		int num; cin>>num;
		if(binary_search(a,a+n,num)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	} 
	return 0; 
}
