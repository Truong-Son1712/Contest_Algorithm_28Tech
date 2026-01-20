#include<iostream>

using namespace std;

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
long long demtongchan(int a[],int n) 
{
	long long chan=0,le =0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) chan++;
		else le++; 
	} 
	long long  dem=(chan-1)*chan/2+(le-1)*le/2;
	return dem; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	cout<<demtongchan(a,n);
	return 0; 
} 
