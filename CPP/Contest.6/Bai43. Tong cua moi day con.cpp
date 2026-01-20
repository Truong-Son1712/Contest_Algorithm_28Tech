#include<iostream>
#include<vector>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void xuat(vector<int> a) 
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
} 
vector<int> tongdaycon(int a[],int n) 
{
	vector<int> v;
	for(int i=0;i<n;i++){
		int sum=0; 
		for(int j=i;j<n;j++){
			sum+=a[j];
			v.push_back(sum); 
		} 
	} 
	return v; 
}
int main()
{ 
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	vector<int> v=tongdaycon(a,n);
	xuat(v);
	return 0; 
} 
