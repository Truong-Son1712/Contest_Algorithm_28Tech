#include<iostream>
#include<algorithm>

using namespace std;

int tongcs(int n) 
{
	int sum=0, du=0; 
	while(n>0){
		du=n%10;
		sum+=du;
		n=n/10; 
	} 
	return sum; 
}
bool cmp(int a,int b) 
{
	if(tongcs(a)!=tongcs(b)) return tongcs(a)<tongcs(b);
	else return a<b; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0; 
}
