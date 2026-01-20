#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
	int p,x; cin>>p>>x;
	long long res=1; 
	for(int i=1;i<=x;i++){
		res*=p;
		res%=10; 
	} 
	cout<<res;
	return 0; 
}
