#include<iostream>

using namespace std;

bool check(int n)
{
	if(n<10) return true;
	int du1=n%10;
	n/=10;
	int du2=n%10;
	if(du1>=du2) return false;
	while(n>10){
		du1=du2;
		n/=10;
		du2=n%10; 
		if(du1>=du2)return false; 
	} 
	return true; 
}
void in(int a,int b) 
{
	for(int i=a;i<=b;i++){
		if(check(i)) cout<<i<<" "; 
	} 
}
int main() 
{
	int a,b; cin>>a>>b;
	in(a,b);
	return 0; 
}
