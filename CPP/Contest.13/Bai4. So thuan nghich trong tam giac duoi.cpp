#include<iostream>

using namespace std;

bool thuannghich(int n) 
{
	int temp=n;
	int dn=0;
	while(n>0){
		int du=n%10;
		dn=dn*10+du;
		n=n/10; 
	} 
	if(dn==temp) return true;
	else return false; 
}
int main() 
{
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int cnt=0; 
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			if(thuannghich(a[i][j])) cnt++;
	cout<<cnt;
	return 0; 
}
