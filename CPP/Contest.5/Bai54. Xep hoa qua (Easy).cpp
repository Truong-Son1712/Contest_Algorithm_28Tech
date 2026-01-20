#include<iostream> 

using namespace std;

long long giaithua(int n)
{
	long long res=1;
	for(int i=1;i<=n;i++){
		res*=i; 
	}
	return res; 
}
int main()
{
	int n, k1,k2,k3,k4;
	cin>>n>>k1>>k2>>k3>>k4;
	cout<<giaithua(n)/(giaithua(k1)*giaithua(k2)*giaithua(k3)*giaithua(k4));
	return 0; 
}
