#include<iostream> 

using namespace std;

bool check(int n) 
{
	bool ok6=false;
	int sum=0,deml=0,demc=0;
	while(n>0){
		int du=n%10;
		if(du==6) ok6=true;
		sum+=du;
		if(du%2==0) demc++;
		else deml++; 
		n/=10; 
	}
	return ok6&&sum%2==0&&deml>demc; 
}
bool in(int a,int b) 
{
	for(int i=a;i<=b;i++){
		if(check(i)) cout<<i<<" "; 
	} 
}
int main() 
{
	int a,b; cin>>a>>b;
	in(a,b) ;
	return 0; 
}
