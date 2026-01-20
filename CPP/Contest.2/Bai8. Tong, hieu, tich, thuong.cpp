#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	long long a,b; cin>>a>>b;
	cout<<a+b<<endl<<a-b<<endl<<(long long)a*b<<endl;
	if(b==0) cout<<"INVALID";
	else cout<<fixed<<setprecision(4)<<(double)a/b ;
	return 0; 
}
