#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n; int x;
	long long sum=0; 
	while(n--){
		cin>>x;
		if(x%2==0)sum+=x; 
	} 
	cout<<sum;
	return 0; 
}
