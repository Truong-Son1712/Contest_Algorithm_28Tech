#include<iostream>
#include<algorithm>
 
using namespace std; 

int main() 
{
	int k2,k3,k5,k6; cin>>k2>>k3>>k5>>k6;
	int s256= min({k2,k5,k6});
	int s32= min({k3,k2-s256});
	long long sum=(long long)s256*256+(long long)s32*32;
	cout<<sum;
	return 0; 
}
