#include<iostream>
#include<math.h> 

using namespace std;

bool check(long long n) 
{
	int dem=0; 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			n/=i; dem++;
			if(n%i==0) return false; 
		}
		if(dem>3)return false; 
	}  
	if(n>1) dem++; 
	return dem==3; 
}
int main() 
{
	long long n; cin>>n;
	if(check(n)) cout<<1;
	else cout<<0;
	return 0; 
}
