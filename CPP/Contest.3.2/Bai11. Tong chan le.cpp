#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int sum=0,dau=-1;
	for(int i=1;i<=n;i++){
		sum+=dau*i;
		dau=-dau; 
	} 
	cout<<sum;
	return 0; 
}
