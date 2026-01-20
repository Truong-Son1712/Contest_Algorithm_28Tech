#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	int dem=0;
	while(n>0){
		int du=n%10;
		if(du==2||du==3||du==5||du==7) dem++;
		n/=10; 
	}
	cout<<dem;
	return 0; 
}
