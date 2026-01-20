#include<iostream>

using namespace std;

int main() 
{
	int x,y,z,t; cin>>x>>y>>z>>t; 
	long long F,sum;
	cout<<y<<","<<z<<","<<x<<","<<t<<endl;
	sum=x+y+z+t;
	cout<<sum<<endl;
	F=x-y+(long long) z*t;
	cout<<F;
	return 0; 
}
