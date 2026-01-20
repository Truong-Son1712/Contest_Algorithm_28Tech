#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
int GTLN(int a[],int n) 
{
	sort(a,a+n);
	int res=max(abs(a[0]+a[1]),abs(a[n-2]+a[n-1]));
	return res; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	cout<<GTLN(a,n);
	return 0; 
}
