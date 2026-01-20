#include<iostream>

using namespace std;

void in1() 
{
	cout<<"28tech.com.vn"<<endl; 
}
void in2(int a,int b,int c) 
{
	cout<<2*a<<" "<<3*b<<" "<<4*c<<endl; 
}
int tich(int a,int b,int c)
{
	return a*b*c; 
}
int main() 
{
	int a,b,c; cin>>a>>b>>c;
	in1();
	in2(a,b,c);
	cout<<tich(a,b,c)<<endl;
	return 0; 
}
