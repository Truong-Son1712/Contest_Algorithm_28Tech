#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
int main()
{
	int n; cin>>n; int a[n];
	int chan=0, le=0, tongchan=0, tongle=0;
	nhap(a,n) ;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0){
			chan++;
			tongchan+=a[i]; 
		}
		else{
			le++;
			tongle+=a[i]; 
		} 	
	}
	 cout<<chan<<endl<<le<<endl<<tongchan<<endl<<tongle;
	 return 0; 
 } 
