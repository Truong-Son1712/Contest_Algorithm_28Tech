#include<iostream>

using namespace std;

const int c=1e9+7; 
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	long long res=0; 
	for(int i=0;i<n;i++) 
	{
		res=((res%c)*(10%c))%c; 
		res=((res%c)+(a[i]%c))%c;  
	}
	cout<<res;
	return 0; 
}
