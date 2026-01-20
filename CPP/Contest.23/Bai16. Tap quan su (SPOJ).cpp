#include<iostream>
#include<set> 

using namespace std;

int n,k,a[100],ok=1; 

void sinh() 
{
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		--i; 
	}
	if(i==0){
		ok=0; 
	} 
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1; 
		} 
	} 
}
int main() 
{
	cin>>n>>k;
	set<int> se; int dem=0; 
	for(int i=1;i<=k;i++){
		cin>>a[i];
		se.insert(a[i]); 
	}
	sinh();
	if(ok==0) cout<<k;
	else{
		for(int i=1;i<=k;i++){
			if(se.find(a[i])==se.end()) dem++; 
		} 
	} 
	cout<<dem;
	return 0; 
}
