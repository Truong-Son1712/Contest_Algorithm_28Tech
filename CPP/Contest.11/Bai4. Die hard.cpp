#include<iostream>

using namespace std;

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i] ;
} 
bool check(int a[],int n) 
{
	int res50=0,res25=0;
	for(int i=0;i<n;i++){
		if(a[i]==25) res25=res25+1;
		else if(a[i]==50){
			res25=res25-1;
			res50=res50+1; 
		} 
		else if(a[i]==100){
			if(res50>0){
				res50=res50-1;
				res25=res25-1; 
			}
			else res25=res25-3; 
		} 
		if(res25<0) return false; 
	}
	return true; 
}
int main()  
{
	int n; cin>>n;
	int a[n] ;
	nhap(a,n);
	if(check(a,n)) cout<<"YES";
	else cout<<"NO";
	return 0; 
} 
