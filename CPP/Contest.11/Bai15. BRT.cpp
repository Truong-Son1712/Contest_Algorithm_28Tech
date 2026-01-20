#include<iostream>
#include<algorithm>
 
using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void dem(int a[],int n) 
{
	int min=a[1]-a[0]; 
	int res=0; 
	for(int i=1;i<n;i++){
		if((a[i]-a[i-1])<min){
			min=a[i]-a[i-1];
			res=1; 
		}
		else if((a[i]-a[i-1])==min)
			res++; 
	} 
	cout<<min<<" "<<res; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n) ;
	sort(a,a+n);
	dem(a,n);
	return 0; 
}
