#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void xuat(vector<int> v) 
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" "; 
}
vector <int> tron(int a[],int b[],int n,int m) 
{
	vector<int> v;
	for(int i=0;i<n;i++)
		v.push_back(a[i]);
	for(int i=0;i<m;i++)
		v.push_back(b[i]);
	sort(v.begin(),v.end());
	return v; 
}
int main() 
{
	int n,m; cin>>n>>m;
	int a[n],b[m]; 
	nhap(a,n);
	nhap(b,m);
	vector <int> v=tron(a,b,n,m);
	xuat(v); 
	return 0; 
}
