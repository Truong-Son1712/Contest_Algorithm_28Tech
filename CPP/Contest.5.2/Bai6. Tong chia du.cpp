#include<iostream>

using namespace std;

const int p=1e9+7; 
int main() 
{
	int n; cin>>n;
	int a[n];
	long long sum=0;
	for(int &x:a){
		cin>>x;
		sum+=x;
		sum%=p; 
	} 
	cout<<sum;
	return 0; 
}
