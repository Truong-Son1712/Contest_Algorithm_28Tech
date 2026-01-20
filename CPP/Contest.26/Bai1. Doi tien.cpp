#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[10]={1,2,5,10,20,50,100,200,500,1000};
	int res=0;
	for(int i=9;i>=0;i--) 
	{
		res+=n/a[i];
		n%=a[i]; 
	}
	cout<<res;
	return 0; 
}
