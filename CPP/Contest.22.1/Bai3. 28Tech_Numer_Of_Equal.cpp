#include<iostream>

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	int a[n],b[m];
	long long res=0; 
	for(int &x:a) cin>>x;
	for(int &x:b) cin>>x;
	int i=0,j=0;
	while(i<n&&j<m){
		if(a[i]==b[j]){
			int dem1=0,dem2=0;
			while(a[i]==b[j]){
				i++;
				dem1++; 
			}
			while(a[i-1]==b[j]){
				++j;
				dem2++; 
			} 
			res+=(long long) dem1*dem2; 
		} 
		else if(a[i]>b[j]){
			j++; 
		}
		else i++; 
	} 
	cout<<res;
	return 0; 
}
