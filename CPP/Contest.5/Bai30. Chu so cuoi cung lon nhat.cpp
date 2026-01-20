#include<iostream>
#include<math.h>
#include<cstring>

using namespace std;
 
const int n=1e7+1;
bool nt[n];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=true;
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		} 
	} 
}
bool cscc(int n) 
{
	int cuoi=n%10; 
	while(n>0){
		if(n%10>cuoi) return false;
		n/=10; 
	}
	return true; 
}
bool check(int n)
{
	return nt[n]&&cscc(n); 
}
int main() 
{
	sang(); 
	int m; cin>>m;
	int dem=0; 
	for(int i=2;i<=m;i++){
		if(check(i)){
			dem++;
			cout<<i<<" "; 
		} 
	} 
	cout<<endl<<dem; 
	return 0; 
}
