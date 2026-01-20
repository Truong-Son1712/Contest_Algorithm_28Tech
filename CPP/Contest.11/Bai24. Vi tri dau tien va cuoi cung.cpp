#include<iostream>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void timkiem(int a[],int n,int x)
{
	int dau,cuoi; 
 	bool check=false;
	for(int i=0;i<n;i++){
	 	if(a[i]==x){
	 		dau=i+1;
			check=true;
			break; 
		 } 
	} 
	for(int i=n-1;i>=0;i--){
	 	if(a[i]==x){
	 		cuoi=i+1;
			break; 
		 } 
	} 
	if(check==true) cout<<dau<<" "<<cuoi;
	else cout<<-1<<" "<<-1; 
}
int main() 
{
	int n,x; cin>>n>>x;
	int a[n];
	nhap(a,n);
	timkiem(a,n,x);
	return 0; 
}
