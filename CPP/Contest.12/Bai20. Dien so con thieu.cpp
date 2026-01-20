#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int L=a[0],R=a[n-1],dem=0; 
	for(int i=L;i<=R;i++){
		if(binary_search(a,a+n,i)==0) dem++; 
	} 
	cout<<dem;
	return 0; 
}
