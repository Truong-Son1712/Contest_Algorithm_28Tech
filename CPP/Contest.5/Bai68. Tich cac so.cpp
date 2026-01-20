#include<iostream>

using namespace std;

const int p=1e9+7;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	long long res=1; 
	for(int x:a) 
	{
		res*=x;
		res%=p; 
	}
	cout<<res;
	return 0; 
}
