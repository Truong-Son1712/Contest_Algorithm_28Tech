#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	for(int i=0;i<=n;i+=3) cout<<i<<" ";
	cout<<endl;
	for(int i=1;i<=n;i*=2) cout<<i<<" ";
	cout<<endl;
	for(int i=n;i<=n+17;i++){
		if(i%17==0){
			cout<<i<<endl;
			break;
		}
	} 
	for(int i=n-1;i>=0;i--){
		if(i%7==0){
			cout<<i<<endl; 
			break;
		}
	} 
	int sum=0; 
	for(int i=1;i<=n;i++){
		cout<<i<<" "; 
		i+=sum; 
		sum+=1; 
	} 
	return 0; 
}
