#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<int> &a,int n)
{
	a.resize(n); 
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 void xuat(vector<int> a)
 {
 	for(int i=0;i<a.size();i++)
	 	cout<<a[i]<<" "; 
  } 
void xoayphai(vector<int> &arr,int k)
{
	int n=arr.size();
	k=k%n;
	vector<int> temp(arr.begin()+n-k,arr.end());
	arr.erase(arr.begin()+n-k,arr.end());
	arr.insert(arr.begin(),temp.begin(),temp.end()); 
 } 
int main()
{
	int n; int k;
	cin>>n>>k;
	vector<int> a;
	nhap(a,n);
	xoayphai(a,k);
	xuat(a);
	return 0; 
 } 
