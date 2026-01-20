#include<iostream> 

using namespace std;

bool check(int a[],int l,int r) 
{
	if(l>=r) return true;
	if(a[l]!=a[r]) return false;
	else return check(a,l+1,r-1); 
}
int main() 
{
	int n; cin>>n;
	int a[n]; 
	for(int i=0;i<n;i++)
		cin>>a[i] ;
	int l=0,r=n-1;
	if(check(a,l,r))cout<<"YES";
	else cout<<"NO"; 
	return 0; 
}
