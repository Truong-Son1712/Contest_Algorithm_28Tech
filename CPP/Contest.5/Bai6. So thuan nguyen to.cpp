#include<iostream> 
#include<math.h> 

using namespace std;

bool nt(int n) 
{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false; 
	}
	return n>1; 
}
bool check(int n) 
{
	int sum=0;
	while(n>0){
		int du=n%10; 
		sum+=du; 
		if(du!=2&&du!=3&&du!=5&&du!=7) return false; 
		n/=10; 
	}
	return nt(sum); 
}
int main() 
{
	int a, b; cin>>a>>b;
	int dem=0; 
	for(int i=a;i<=b;i++){
		if(check(i)&&nt(i)) dem++; 
	} 
	cout<<dem; 
	return 0; 
}
