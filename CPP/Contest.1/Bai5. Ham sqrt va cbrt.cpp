#include<iostream>
#include<math.h> 
#include<iomanip>
 
using namespace std;

int main()
{
	int n; cin>>n;
	cout<<fixed<<setprecision(2)<<sqrt(n)<<endl<<fixed<<setprecision(3)<<cbrt(n);
	return 0;	
} 
