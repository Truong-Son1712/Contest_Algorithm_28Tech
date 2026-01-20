#include <bits/stdc++.h>
#include<math.h> 

using namespace std;
bool ngto( int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return n>1; 
 }
 bool thuannghich(int n)
 {
 	int temp =n, du=0, dn=0; 
	 while(n!=0){
	 	du=n%10;
		dn=dn*10+du;
		n=n/10; 
	 }
	 if(dn==temp) return true;
	 else return false; 
  } 
bool chinhphuong(int n)
{
	int can=sqrt(n);
	if(can*can==n)return true;
	else return false; 
 } 
 bool tongngto(int n)
 {
 	int sum=0, du=0;
	 while(n!=0){
	 	du=n%10;
		 sum=sum+du;
		 n=n/10; 
	 } 
	 if(ngto(sum)) return true;
	 else return false; 
  } 

void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
void dem(int a[], int n)
{
	int demnt=0, demtn=0, demcp=0, demtnt=0;
	for(int i=0;i<n;i++){
		if(ngto(a[i])) demnt++;
		if(thuannghich(a[i])) demtn++;
		if(chinhphuong(a[i])) demcp++;
		if(tongngto(a[i]))  demtnt++; 
	} 
	cout<<demnt<<endl<<demtn<<endl<<demcp<<endl<<demtnt; 
 } 

int main()
{
	int n; cin>>n; int a[n];
	nhap(a,n);
	dem(a,n); 
	return 0; 
}
