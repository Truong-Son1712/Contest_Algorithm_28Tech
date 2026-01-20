#include<iostream>
#include<math.h>
#include<cstring>
 
using namespace std;

const int n=1e7+1;
bool nt[n];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=0;
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		} 
	} 
}
bool check(int n)
{
	while(n>0){
		int du=n%10;
		if(du!=2&&du!=3&&du!=5&&du!=7) return false;
		n/=10; 
	} 
	return true; 
}
int main() 
{
	sang();
	int a,b; cin>>a>>b;
	int dem=0; 
	for(int i=a;i<=b;i++){
		if(nt[i]&&check(i)) dem++; 
	} 
	cout<<dem; 
	return 0; 
}
