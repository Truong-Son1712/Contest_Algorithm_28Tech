#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long long num1=0,num2=0;
	for(int i=0;i<n;i++){
		if(i%2==0) num1=num1*10+a[i];
		else num2=num2*10+a[i]; 
	} 
	cout<<num1+num2;
	return 0; 
}
