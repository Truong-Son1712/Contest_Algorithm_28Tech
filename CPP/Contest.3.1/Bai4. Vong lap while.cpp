#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int i=3;
	while(i<=n){
		cout<<i<<" ";
		i+=3; 
	} 
	cout<<endl;
	i=0;
	while(i<n){
		cout<<i<<" ";
		i+=15; 
	}
	cout<<endl; 
	i=n;
	while(i<=n+7){
		if(i%7==0){
			cout<<i<<endl;
			break; 
		} 
		i++; 
	} 
	i=n;
	while(i>=0){
		if(i%9==0){
			cout<<i<<endl;
			break; 
		} 
		i--; 
	} 
	i=1;
	while(i<=2*n-1){
		cout<<i<<" ";
		i+=2; 
	} 
	return 0; 
}
