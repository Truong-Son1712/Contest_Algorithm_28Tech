#include<iostream>
#include<algorithm>

using namespace std;

int demchan(int n) 
{
	int dem=0; 
	if(n==0) return 1; 
	while(n>0){
		int du=n%10;
		if(du%2==0) dem++;
		n=n/10; 
	} 
	return dem; 
}
int demle(int n) 
{
	int dem=0; 
	while(n>0){
		int du=n%10;
		if(du%2!=0) dem++;
		n=n/10; 
	} 
	return dem; 
}
bool cmp1(int a,int b)
{
	if(demchan(a)!=demchan(b)) return demchan(a)<demchan(b);
	else return a<b; 
}
bool cmp2(int a,int b) 
{
	return demle(a)<demle(b);
}
int main() 
{
	int n; cin>>n;
	int a[n],b[n]; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i]; 
	}
	sort(a,a+n,cmp1) ;
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
	stable_sort(b,b+n,cmp2);
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
	return 0; 
}
