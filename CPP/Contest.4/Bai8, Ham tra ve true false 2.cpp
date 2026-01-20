#include<iostream> 

using namespace std;

bool check(int n) 
{
	int demc=0,deml=0;
	while(n>0) 
	{
		int du=n%10;
		if(du%2==0) demc++;
		else deml++;
		n/=10; 
	}
	return demc==deml; 
}
void in(int n)
{
	for(int i=1;i<=n;i++){
		if(check(i))cout<<i<<" "; 
	} 
}
int main() 
{
	int n; cin>>n;
	in(n);
	return 0; 
}
