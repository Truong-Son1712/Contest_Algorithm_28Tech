#include<iostream>
#include<algorithm> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=a[i]; 
	}  
	sort(b,b+n);
	int k=n/2+1; 
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]&&a[i]!=b[n-i-1]){
			cout<<"NO";
			return 0; 
		}
	} 
	cout<<"YES";
	return 0; 
}
