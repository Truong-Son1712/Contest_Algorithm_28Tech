#include<iostream>
#include<iomanip>
 
using namespace std;

int main() 
{
	int n; cin>>n; 
	double sum=1;
	long long gt=1;
	for(int i=1;i<n;i++){
		gt*=i;
		sum+=(double)1/gt; 
	} 
	cout<<fixed<<setprecision(4)<<sum;
	return 0; 
}
