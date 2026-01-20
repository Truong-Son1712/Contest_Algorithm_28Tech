#include <bits/stdc++.h>
#include<math.h> 

using namespace std;
int dem[1000001]; 
void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 }
 int congtru(int a[],int b[],int n)
 {
 	int sum=a[0];
	 for(int i=0;i<n-1;i++){
	 	if(b[i]==1) sum+=a[i+1];
		else if(b[i]==2) sum-=a[i+1]; 
	 } 
	 return sum; 
  } 
int main()
{
	int n; cin>>n; int a[n], b[n-1]; 
	nhap(a,n);  
	nhap(b,n-1);
	cout<<congtru(a,b,n); 
	return 0; 
}
