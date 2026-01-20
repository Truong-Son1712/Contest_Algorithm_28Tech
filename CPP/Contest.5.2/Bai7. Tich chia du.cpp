#include<iostream>

using namespace std;

const int p=1e9+7; 
int main() 
{
	int n; cin>>n;
	long long res=1;
	int a[n];
	for(int &x:a) {
		cin>>x;
		res*=x;
		res%=p; 
	}
	cout<<res;
	return 0; 
}
