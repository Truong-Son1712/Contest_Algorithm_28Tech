#include<iostream>

using namespace std;

bool search(int a[],int n, int x) 
{
	int l=0,r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return true;
		else if(a[mid]<x) l=mid+1;
		else r=mid-1; 
	}
	return false; 
}
int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	if(search(a,n,k)) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
