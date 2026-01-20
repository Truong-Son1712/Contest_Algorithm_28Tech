#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	long long sum=0,gt=1;
	for(int i=1;i<=n;i++){
		gt*=i;
		sum+=gt; 
	} 
	cout<<sum;
	return 0; 
}
