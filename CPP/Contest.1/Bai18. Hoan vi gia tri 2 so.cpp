#include<iostream>

using namespace std;

int main() 
{
	int a,b; cin>>a>>b;
	int tmp=a;
	a=b;
	b=tmp;
	cout<<(long long)128*a+(long long)97*b+1000;
	return 0; 
}
