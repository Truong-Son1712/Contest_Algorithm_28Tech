#include<iostream>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n],dem=0,ans=0; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1) dem++; 
	}
	if(dem<k){
		cout<<-1;
		return 0; 
	} 
	dem=0; 
	for(int i=0;i<k;i++){
		if(a[i]==1) dem++; 
	} 
	for(int i=k;i<n;i++){
		if(a[i]==1) dem++;
		if(a[i-k]==1) dem--;
		ans=max(ans,dem); 
	} 
	cout<<k-ans;
	return 0; 
}
