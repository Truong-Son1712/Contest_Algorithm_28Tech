#include <bits/stdc++.h>
#include<math.h> 

using namespace std;

void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
int mangdanhdau(int a[], int n)
{
	int dem=0; int b[n]={0};
	for(int i=0;i<n;i++){
		if(b[i]==0){
			dem++;
			for(int j=i+1;j<n;j++)
				if(a[i]==a[j]) b[j]=1; 
		} 
	}
	return dem; 
 } 
int main()
{
	int n; cin>>n; int a[n]; 
	nhap(a,n);
	cout<<mangdanhdau(a,n); 
	return 0; 
}
