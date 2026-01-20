#include<bits/stdc++.h>
using namespace std;
int dem[1001]; 
int dem2[1001];
int dem3[1001]; 
void lietke(int a[], int n)
{
	for(int i=0;i<n;i++)
		 dem[a[i]]++; 
	for(int i=0;i<n;i++){
		if(dem[a[i]]!=0){
			cout<<a[i]<<' '<<dem[a[i]]<<endl;
			dem[a[i]]=0; 
		} 
	} 
 } 
 void sapxep(int a[], int n) 
 {
 	for(int i=0;i<n-1;i++)
	 	for(int j=i+1;j<n;j++)
		 	if(a[i]>a[j]) swap(a[i],a[j]); 
 }
 int solanxuathiennhieunhat(int a[],int n)
 {
 	int GTLN=a[0]; 
	 for(int i=0;i<n;i++)
	 	dem2[a[i]]++;
	int max=dem2[a[0]];
	for(int i=0;i<n;i++){
		if(dem[a[i]]>max){
			max=dem2[a[i]];
			GTLN=a[i];
		}
	}
	for(int i=0;i<n;i++)
		if(dem2[a[i]]==max&&a[i]>GTLN) GTLN=a[i]; 
	return GTLN; 
  } 
  int solanxuathienitnhat(int a[], int n)
  {
     int GTNN=a[0]; 
	 for(int i=0;i<n;i++)
	 	dem3[a[i]]++;
	int min=dem3[a[0]];
	for(int i=0;i<n;i++){
		if(dem[a[i]]<min){
			min=dem3[a[i]];
			GTNN=a[i];
		}
	}
	for(int i=0;i<n;i++)
		if(dem3[a[i]]==min&&a[i]<GTNN) GTNN=a[i]; 
	return GTNN; 
   }
   void nhap(int a[], int n) 
   {
   		for(int i=0;i<n;i++)
		   cin>>a[i]; 
   }
   int main(){
   		int n; cin>>n;
		int a[n]; 
		nhap(a,n);
		lietke(a,n);
		cout<<endl;
		sapxep(a,n);
		lietke(a,n);
		cout<<endl;
		cout<<solanxuathiennhieunhat(a,n)<<endl<<solanxuathienitnhat(a,n);
		return 0; 
   } 
