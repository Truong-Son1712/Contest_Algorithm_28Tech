#include<iostream>
#include<iomanip> 

using namespace std;

int main() 
{
	double e=1;
	long long gt=1;
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		gt*=i;
		e+=(double)1/gt; 
	} 
	cout<<fixed<<setprecision(2)<<e;
	return 0; 
}
