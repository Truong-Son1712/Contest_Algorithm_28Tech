#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n; 
	if(n==1){
		cout<<-1;
		return 0; 
	} 
	int dem2=0, dem3=0; 
	if(n%2==0){
		dem2=n/2;
	}else{
		dem3=1; 
		dem2=(n-3)/2; 
	} 
	cout<<dem2+dem3<<endl;
	for(int i=0;i<dem2;i++) cout<<'2'<<" ";
	if(dem3==1) cout<<'3'; 
	return 0; 
}
