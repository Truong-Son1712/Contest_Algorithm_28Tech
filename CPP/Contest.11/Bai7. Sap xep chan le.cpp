#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;

void nhap(vector<int> &a) 
{
	int n; cin>>n;
	a.resize(n);
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void xuat(vector<int>a) 
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
}
vector<int> sapxep(vector<int> a) 
{
	vector<int> luu1,luu2; 
	for(int i=0;i<a.size();i++){
		if(a[i]%2!=0) luu1.push_back(a[i]); 
	} 
	sort(luu1.begin(),luu1.end(),greater<int>());
	for(int i=0;i<a.size();i++){
		if(a[i]%2==0) luu2.push_back(a[i]); 
	} 
	sort(luu2.begin(),luu2.end());
	for(int i=0;i<luu2.size();i++)
		luu1.push_back(luu2[i]) ;
	return luu1; 
}
int main() 
{
	vector<int>a;
	nhap(a);
	vector<int>v=sapxep(a);
	xuat(v);
	return 0; 
}
