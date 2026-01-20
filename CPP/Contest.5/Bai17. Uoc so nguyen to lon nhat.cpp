#include<iostream>
#include<math.h>

using namespace std;

int uoc(int n) 
{
	int tmp=0; 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i; 
			} 
		} 
		if(n==1) tmp=i; 
	} 
	if(n>1) return n;
	else return tmp; 
}
int main() 
{
	int T; cin>>T;
	while(T--) 
	{
		int n;; cin>>n;
		cout<<uoc(n)<<endl; 
	}
	return 0; 
}
