#include<iostream> 

using namespace std;

int main() 
{
	int n; cin>>n;
	long long sum=0;
	for(int i=3;i<=n;i+=3) sum+=i;
	cout<<sum;
	return 0;	
} 
