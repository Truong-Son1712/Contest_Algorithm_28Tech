#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n; 
	int a[n];
	for(int &x:a) cin>>x;
	for(int x: a) cout<<x<<" ";
	cout<<endl;
	for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) if(i%2==0) cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) if(i%2!=0) cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n-1;i++) cout<<a[i]+a[i+1]<<" ";
	return 0; 
}
