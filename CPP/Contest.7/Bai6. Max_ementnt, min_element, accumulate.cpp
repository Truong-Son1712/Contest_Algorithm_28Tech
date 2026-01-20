#include<iostream>
#include<vector>
#include<algorithm> 
#include<numeric> 
using namespace std;

void nhap(vector<int> &a,int n) 
{
	for(int i=0;i<n;i++){
		int num; cin>>num;
		a.push_back(num); 
	} 
}
void xuat(vector<int>a)
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
 } 
int main()
{
	vector<int> a;
	int n; cin>>n;
	nhap(a,n);
	cout<<*min_element(a.begin(),a.end());
	cout<<endl;
	cout<<*max_element(a.begin(),a.end());
	cout<<endl;
	cout<<accumulate(a.begin(),a.end(),0); 
	return 0; 
 } 
