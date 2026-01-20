#include<iostream>
#include<iomanip> 

using namespace std;

int main() 
{
	int a,b; cin>>b>>a;
	cout<<a/b<<endl<<fixed<<setprecision(2)<<(double)a/b;
	return 0; 
}
