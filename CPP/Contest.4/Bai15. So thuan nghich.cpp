#include<iostream>

using namespace std;

bool thuannghich(long long n) 
{
	int du=0;
	long long kq=0,tmp=n;
	while(n>0){
		du=n%10;
		kq=kq*10+du;
		n/=10; 
	} 
	return kq==tmp; 
}
void in(long long a,long long b) 
{
	for(int i=a;i<=b;i++){
		if(thuannghich(i)) cout<<i<<" "; 
	} 
}
int main() 
{
	long long a,b; cin>>a>>b;
	in(a,b); 
	return 0; 
}
