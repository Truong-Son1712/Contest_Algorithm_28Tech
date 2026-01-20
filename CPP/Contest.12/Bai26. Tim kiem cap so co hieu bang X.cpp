#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(binary_search(a,a+n,a[i]-k)){
			cout<<1;
			return 0; 
		} 
	} 
	cout<<-1;
	return 0; 
}
