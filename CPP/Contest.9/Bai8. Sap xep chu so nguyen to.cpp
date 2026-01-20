#include<iostream>
#include<algorithm>
#include<math.h> 

using namespace std;

bool ngto(int n) 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return n>1; 
}
int demngto(int n)
{
	int dem=0;
	while(n>0){
		int du=n%10;
		if(ngto(du))dem++;
		n=n/10; 
	} 
	return dem; 
}
bool cmp(int a,int b) 
{
	return demngto(a)>demngto(b); 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0; 
}
