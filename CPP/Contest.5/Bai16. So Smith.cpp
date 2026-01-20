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
int tongcs(int n) 
{	
	int sum=0; 
	while(n>0){
		sum+=n%10;
		n/=10; 
	} 
	return sum; 
}
int tongcsnt(int n)
{
	int sum=0; 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0) {
				sum+=tongcs(i);
				n/=i; 
			}
		} 
	} 
	if(n>1) sum+=tongcs(n);
	return sum; 
}
bool check(int n)
{
	if(nt(n)) return false;
	return tongcs(n)==tongcsnt(n); 
}
int main() 
{
	int n; cin>>n; 
	if(check(n))cout<<"YES";
	else cout<<"NO";
	return 0; 
}
