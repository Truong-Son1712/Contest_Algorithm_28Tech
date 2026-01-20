#include<iostream>
#include<math.h>

using namespace std;

bool tn(int n) 
{
	int tmp=n,ln=0;
	while(n>0){
		ln=ln*10+n%10;
		n/=10; 
	} 
	return tmp==ln; 
}
bool so6(int n)
{
	while(n>0){
		if(n%10==6) return true;
		n/=10; 
	} 
	return false; 
}
bool so8(int n)
{
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10; 
	} 
	return sum%10==8; 
}
int main() 
{
	int a,b; cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(tn(i)&&so6(i)&&so8(i)) cout<<i<<" "; 
	} 
	return 0; 
}
