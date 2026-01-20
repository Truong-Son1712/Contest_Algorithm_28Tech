#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	int F[n]; F[0]=a[0];
	for(int i=1;i<n;i++){
		F[i]=F[i-1]+a[i]; 
	} 
	for(int x:F) cout<<x<<" ";
	return 0; 
}
