#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int mua=n/28;
	int dem=mua;
	while(mua>3){
		dem+=mua/3; 
		mua/=3; 
	} 
	cout<<dem;
	return 0; 
}
