#include<iostream>
#include<vector> 
#include<numeric>
 
using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++) 
		cin>>a[i]; 
}
void xuat(vector<int>v) 
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" "; 
}
vector<int> tonglonnhat(int a[],int n,int k) 
{
	vector<int> luu; 
	int summax=0,sumhh=0,index=0;
	for(int i=0;i<=n-k;i++){
		sumhh=0; 
		for(int j=i;j<k+i;j++){
			sumhh+=a[j]; 
		}
		if(sumhh>summax){
			summax=sumhh;
			index=i; 
		} 
	} 
	for(int i=index;i<index+k;i++)
		luu.push_back(a[i]);
	return luu; 
}
int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	nhap(a,n);
	vector<int> v=tonglonnhat(a,n,k); 
	int max= accumulate(v.begin(),v.end(),0);
	cout<<max<<endl; 
	xuat(v);
	return 0; 
}
