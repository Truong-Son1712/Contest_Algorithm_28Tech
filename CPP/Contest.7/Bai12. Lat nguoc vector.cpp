#include<iostream>
#include<vector>

using namespace std;

void latnguoc(vector<int> &a)
{
	for(int i=0;i<a.size()/2;i++)
		swap(a[i],a[a.size()-1-i]); 
 } 
 void nhap(vector<int> &a, int n)
 {
 	for(int i=0;i<n;i++)
	 	cin>>a[i]; 
 }
 void xuat(vector<int>a)
 {
 	for(int i=0;i<a.size();i++) 
	  	cout<<a[i]<<" "; 
  } 
int main()
{
	int n; cin>>n;
	vector<int> a(n);
	nhap(a,n);
	latnguoc(a);
	xuat(a);
	return 0; 
 } 
