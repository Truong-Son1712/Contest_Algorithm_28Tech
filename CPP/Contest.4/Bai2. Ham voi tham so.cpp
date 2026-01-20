#include<iostream>

using namespace std;

void in(long long a,long long b,long long c) 
{
	cout<<b<<" "<<a<<" "<<c<<endl;
	cout<<a+b+c<<endl;
	cout<<"KET THUC !"<<endl; 
}
int main() 
{
	long long a,b,c; cin>>a>>b>>c;
	in(a,b,c);
	return 0; 
}
