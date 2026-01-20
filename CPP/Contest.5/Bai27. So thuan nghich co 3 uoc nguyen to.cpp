#include<iostream>
#include<math.h>

using namespace std;

bool tn(int n) 
{
	int tmp=n, ln=0;
	while(n>0){
		ln=ln*10+n%10;
		n/=10; 
	} 
	return tmp==ln ;
}
bool demuocnt(int n) 
{
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			dem++; 
			while(n%i==0){
				n/=i; 
			} 
		} 
	} 
	if(n>1) dem++;
	return dem==3; 
}
bool check(int n) 
{
	return tn(n)&&demuocnt(n); 
}
int main() 
{
	int a,b; cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(check(i)) cout<<i<<" "; 
	} 
	return 0; 
}
