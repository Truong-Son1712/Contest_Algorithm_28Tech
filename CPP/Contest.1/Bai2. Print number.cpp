#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	int x;
	long long y;
	char c;
	float f;
	double d;
	cin>>x>>y>>c>>f>>d;
	cout<<x<<endl<<y<<endl<<c<<endl<<fixed<<setprecision(2)<<f<<endl<<fixed<<setprecision(9)<<d; 
	return 0; 
}
