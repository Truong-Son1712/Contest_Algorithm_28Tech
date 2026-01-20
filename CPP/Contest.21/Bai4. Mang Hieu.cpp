#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	int D[n];D[0]=a[0];
	for(int i=1;i<n;i++){
		D[i]=a[i]-a[i-1]; 
	} 
	for(int x:D) cout<<x<<" ";
	return 0; 
}
