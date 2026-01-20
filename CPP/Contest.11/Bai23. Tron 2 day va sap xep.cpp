#include<iostream>
#include<vector> 
#include<algorithm>

using namespace std;

void nhap(vector<int>&a,int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i] ;
}
void xuat(vector<int>v) 
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" "; 
}
vector<int> tron(vector<int>&a,vector<int>&b) 
{
	int n=a.size(); 
	vector<int>luu;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<int>());
	for(int i=0;i<2*n;i++){
		if(i%2==0)luu.push_back(a[i/2]);
		if(i%2!=0)luu.push_back(b[(i-1)/2]);
	}
	return luu; 
}
int main() 
{
	int n; cin>>n;
	vector<int> a(n),b(n);
	nhap(a,n);
	nhap(b,n);
	vector<int>v=tron(a,b);
	xuat(v);
	return 0; 
}
