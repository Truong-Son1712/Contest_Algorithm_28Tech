#include<iostream>
#include<math.h>
 
using namespace std;

int main() 
{
	long long n; cin>>n;
	long long dem=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i*i==n) dem+=1;
			else dem+=2; 
		} 
	} 
	cout<<dem;
	return 0; 
}
