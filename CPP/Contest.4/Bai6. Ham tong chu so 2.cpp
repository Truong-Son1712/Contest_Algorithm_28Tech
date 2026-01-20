#include<iostream> 

using namespace std;

int tongcs(long long n) 
{
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10; 
	}
	return sum; 
}
int main() 
{
	int n; cin>>n; 
	long long x;
	while(n--){
		cin>>x;
		cout<<tongcs(x)<<" ";
	} 
	return 0; 
}
