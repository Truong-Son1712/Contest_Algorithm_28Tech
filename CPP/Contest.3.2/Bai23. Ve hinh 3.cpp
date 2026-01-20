#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	for(int i=0;i<n;i++){
		for(int j=i*n+1;j<i*n+1+n;j++) cout<<j<<" ";
		cout<<endl; 
	} 
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<i+1+n;j++) cout<<j<<" ";
		cout<<endl; 
	} 
	cout<<endl;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j>=n-i+1) cout<<i;
			else cout<<'~'; 
		}
		cout<<endl; 
	} 
	cout<<endl;
	int k=0; 
	for(int i=1;i<=n;i++){
		int truoc=i,sau; 
		for(int j=1;j<=i;j++){
			cout<<truoc<<" ";
			sau=truoc+n-j; 
			truoc=sau; 
		}  
		cout<<endl; 
	} 
}
