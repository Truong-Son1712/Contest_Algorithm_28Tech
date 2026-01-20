#include<iostream>
#include<math.h>

using namespace std;

const int p=1e9+7;

int main() 
{
	int n; cin>>n;
	long long res=1;
	for(int i=1;i<=n;i++) 
	{
		res*=i;
		res%=p;
		cout<<res<<endl; 
	}
	return 0; 
}
