#include<iostream> 
#include<algorithm>

using namespace std;

int search1(int a[],int n,int x) 
{
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			res= mid ;
			r=mid-1;
		}
		else if(a[mid]>x) r=mid-1;
		else l=mid+1; 
	} 
	return res; 
}
int search2(int a[],int n,int x) 
{
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			res= mid;
			l=mid+1;
		}
		else if(a[mid]>x) r=mid-1;
		else l=mid+1; 
	} 
	return res; 
}
int search3(int a[],int n,int x) 
{
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]>=x){
			res= mid ;
			r=mid-1;
		}
		else l=mid+1; 
	} 
	return res; 
}
int search4(int a[],int n,int x) 
{
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]>x){
			res= mid; 
			r=mid-1;
		}
		else l=mid+1; 
	} 
	return res; 
}
int main() 
{
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i]; 
	cout<<search1(a,n,x)<<endl;
	cout<<search2(a,n,x)<<endl;
	cout<<search3(a,n,x)<<endl; 
	cout<<search4(a,n,x)<<endl;
	if(search1(a,n,x)!=-1){
	cout<<search2(a,n,x)-search1(a,n,x)+1;}
	else cout<<0; 
	return 0; 
}
