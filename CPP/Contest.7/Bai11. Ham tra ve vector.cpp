#include<iostream>
#include<vector>
#include<math.h> 

using namespace std;

bool ngto(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return n>1; 
 } 
void nhap(vector<int> &a,int n)
{
 	for(int i=0;i<n;i++)
	 	cin>>a[i]; 
} 
void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
}
vector<int> listnt(vector<int>v)
{
	vector<int> nt;
	for(int i=0;i<v.size();i++) 
		if(ngto(v[i])) nt.push_back(v[i]);
	return nt; 
 } 
int main()
{
	int n; cin>>n;
	vector<int> v(n);
	nhap(v,n);
	vector<int> nguyento=listnt(v);
	xuat(nguyento);
	return 0; 
 } 
