#include<iostream> 

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void solonhon(int a[],int n) 
{
	int max=a[0];
	cout<<a[0]<<" ";
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
			cout<<max<<" "; 
		} 
	} 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	solonhon(a,n);
	return 0; 
} 
