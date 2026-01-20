#include<iostream>

using namespace std;

int main() 
{
	int a,b; cin>>a>>b;
	int res=min(a,b);
	int kq=1;
	for(int i=1;i<=res;i++) kq*=i;
	cout<<kq;
	return 0; 
}
