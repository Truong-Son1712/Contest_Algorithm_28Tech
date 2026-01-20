#include<iostream>
#include<math.h> 

using namespace std;

int main() 
{
	long long n; cin>>n;
	n=abs(n);
	int demc=0,deml=0; 
	if(n==0){
		cout<<"28tech";
		return 0; 
	} 
	while(n>0){
		int du=n%10;
		if(du%2==0) demc++;
		else deml++;
		n/=10; 
	}
	if(demc>deml) cout<<"28tech";
	else cout<<"29tech";
	return 0; 
}
