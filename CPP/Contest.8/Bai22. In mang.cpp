#include<iostream>

using namespace std;

void inmangnguoc(int a[],int n,int i) 
{	
	if(i==-1)return ;
	cout<<a[i]<<" ";
	inmangnguoc(a,n,i-1); 
}
void inmangxuoi(int a[],int n,int i) 
{	
	if(i==-1)return ;
	inmangxuoi(a,n,i-1); 
	cout<<a[i]<<" ";
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int k=n-1; 
	inmangxuoi(a,n,k) ;
	cout<<endl; 
	inmangnguoc(a,n,k); 
}
