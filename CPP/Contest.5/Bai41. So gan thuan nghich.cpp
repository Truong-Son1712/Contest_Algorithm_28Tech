#include<iostream>
#include<math.h>

using namespace std;

bool tn(long long n)
{
	long long tmp=n, ln=0; 
	while(n>0){
		ln=ln*10+n%10;
		n/=10; 
	} 
	return ln==tmp; 
}
bool check(long long n)
{
	int a=0;
	int cuoi=n%10;
	n/=10; 
	while(n>10){
		a=a*10+n%10;
		n/=10; 
	} 
	int dau=n;
	if(tn(a)&&(cuoi*2==dau||dau*2==cuoi)) return true;
	else return false; 
}
int main() 
{
	long long n; cin>>n;
	if(check(n)) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
