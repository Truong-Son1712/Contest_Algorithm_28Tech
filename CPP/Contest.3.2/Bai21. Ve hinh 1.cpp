#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<'*';
		cout<<endl; 
	} 
	cout<<endl; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==n-1) cout<<'*'; 
			else{
				if(j==0||j==n-1) cout<<'*';
				else cout<<' '; 
			} 
		} 
		cout<<endl; 
	} 
	cout<<endl; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==n-1) cout<<'*'; 
			else{
				if(j==0||j==n-1) cout<<'*';
				else cout<<'#'; 
			} 
		} 
		cout<<endl; 
	} 
	cout<<endl; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==n) cout<<i; 
			else{
				if(j==1||j==n) cout<<i;
				else cout<<' '; 
			} 
		} 
		cout<<endl; 
	} 
}
