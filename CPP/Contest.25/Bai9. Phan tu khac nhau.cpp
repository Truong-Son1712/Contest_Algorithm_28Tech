#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	int b[n-1];
	for(int &x:a) cin>>x;
	for(int &x:b) cin>>x;
	for(int i=0;i<n-1;i++){
		 if(a[i]!=b[i]){
		 	cout<<a[i];
			return 0; 
		 } 
	} 
	cout<<a[n-1];
	return 0; 
}
