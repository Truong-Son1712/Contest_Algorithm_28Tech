#include<iostream>
#include<math.h> 

using namespace std;

void cach1(int n) 
{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<i<<" ";
			while(n%i==0){
				n/=i; 
			} 
		}
	} 
	if(n>1) cout<<n; 
	cout<<endl; 
}
void cach2(int n) 
{
	int dem=0;
	for(int i=2;i<=sqrt(n);i++) 
	{
		if(n%i==0){
			dem=0;
			while(n%i==0){
				dem++; 
				n/=i; 
			} 
			cout<<'('<<i<<','<<' '<<dem<<')'<<' '; 
		}
	}
	if(n>1) cout<<'('<<n<<','<<" 1)"; 
	cout<<endl; 
}
void cach3(int n) 
{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				 if(n>1) cout<<i<<" x ";
				 else cout<<i;
				 n/=i; 
			} 
		}
	} 
	if(n>1) cout<<n;
	cout<<endl; 
}
int main() 
{
	int n; cin>>n;
	cach1(n);
	cach2(n);
	cach3(n);
	return 0; 
}
