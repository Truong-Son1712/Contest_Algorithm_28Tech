#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	bool ok=true;
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			ok=false;
			break; 
		} 
	} 
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
