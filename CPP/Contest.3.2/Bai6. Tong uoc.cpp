#include<iostream> 
#include<math.h> 

using namespace std;

int main() 
{
	int n; cin>>n;
	long long s=0;
	for(int i=1;i<=sqrt(n);i++){
		if(i*i==n) s+=i;
		else if(n%i==0) s+=i+n/i; 
	} 
	cout<<s;
	return 0; 
}
