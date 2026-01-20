#include<iostream> 
#include<math.h>

using namespace std;

bool mm(long long n) 
{
	while(n>0){
		if(n%10!=4&&n%10!=7) return false;
		n/=10; 
	}
	return true; 
}
bool check(long long n) 
{
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0&&(mm(i)||mm(n/i))) return true; 
	}
	return false; 
}
int main() 
{
	long long n; cin>>n; 
	if(check(n)) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
