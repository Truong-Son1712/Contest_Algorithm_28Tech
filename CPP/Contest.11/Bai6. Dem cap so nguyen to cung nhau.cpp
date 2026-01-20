#include<bits/stdc++.h>
using namespace std;
int demntcn(int a[],int n){
	int dem=0;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(__gcd(a[i],a[j])==1) dem++;
	return dem;}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<demntcn(a,n);
	return 0;
	}
	
