#include<iostream>
#include<algorithm>
 
using namespace std;

void nhap(long long a[],int n) 
{
	for(int i=0;i<n;i++){
		int x; cin>>x;
		a[i]= (long long)x*x; 
	} 
}
bool check(long long a[],int n) 
{
	sort(a,a+n);
	for(int i=n-1;i>=2;i--){
		int l=0,r=i-1;
		while(l<r){
			if(a[l]+a[r]==a[i]) return true;
			else if(a[l]+a[r]<a[i]) ++l; 
			else --r; 
		} 
	} 
	return false; 
}
int main() 
{
	int n; cin>>n;
	long long a[n];
	nhap(a,n);
	if(check(a,n))cout<<"YES";
	else cout<<"NO";
	return 0; 
}
