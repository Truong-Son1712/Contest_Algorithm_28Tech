#include<iostream> 
#include<iomanip> 

using namespace std;

int main() 
{
	int n; cin>>n;
	double sum;
	for(int i=1;i<=n;i++) {
		sum+=(double)1/i; 
	}
	cout<<fixed<<setprecision(3)<<sum;
	return 0; 
}
