#include<iostream>

using namespace std;

void SWAP(int &x,int &y) 
{
	int tmp=x;
	x=y;
	y=tmp; 
}
int main()
{
	int x,y; cin>>x>>y;
	SWAP(x,y);
	cout<<x<<" "<<y;
	return 0; 
}
