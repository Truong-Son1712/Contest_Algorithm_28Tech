#include<iostream>

using namespace std;

int main() 
{
	int a,b,k; cin>>a>>b>>k;
	if(k%2==0){
		cout<<a*k/2 -b*k/2; 
	}else{
		cout<<a*(k+1)/2-b*(k/2); 
	} 
	return 0; 
}

