#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	if(n%2!=0){
		cout<<"NO";
		return 0; 
	} 
	int demc=0,deml=0; 
	int a[n];
	for(int &x:a) 
	{
		cin>>x;
		if(x%2==0) demc++;
		deml++; 
	}
	if(demc%2==0){
		cout<<"YES";
		return 0; 
	} 
	sort(a,a+n);
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]==1){
			cout<<"YES";
			return 0; 
		} 
	} 
	cout<<"NO";
	return 0; 
}
