#include<iostream>
#include<vector>

using namespace std;

vector<int> nhap()
{
	int n; cin>>n; 
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i]; 
	return v; 
 } 
vector<int> thaydoi(vector<int> v)
{
	vector<int> luu;
	for(int i=0;i<v.size();i++)
		if(v[i]!=v[i+1]){
			luu.push_back(v[i]);
		}
	return luu; 
 } 
 void xuat(vector<int> v)
 {
 	for(int i=0;i<v.size();i++)
	 	cout<<v[i]<<" "; 
  } 
 int main()
 {
 	vector<int> v=nhap();
	vector<int> res=thaydoi(v); 
	xuat(res);
	return 0; 
  } 
