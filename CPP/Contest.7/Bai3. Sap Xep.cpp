#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

void nhap(vector<int> &a,int n) 
{
	for(int i=0;i<n;i++){
		int num; cin>>num;
		a.push_back(num); 
	} 
}
void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
 } 
int main()
{
	vector<int> a;
	int n; cin>>n;
	nhap(a,n);
	sort(a.begin(),a.end());
	xuat(a);
	sort(a.begin(),a.end(),greater<int>());
	xuat(a);
	return 0; 
 } 
