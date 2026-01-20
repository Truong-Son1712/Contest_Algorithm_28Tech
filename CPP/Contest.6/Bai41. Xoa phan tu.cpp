#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<int> &a) 
{
	int n; cin>>n;
	a.resize(n);
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
void xuat(vector<int> a) 
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
}
void xoa28(vector<int> &a) 
{
	for(int i=0;i<a.size();i++){
		if(a[i]==28){
			a.erase(a.begin()+i) ;
			i--;
		}
	}
}
int main() 
{
	vector<int> a;
	nhap(a);
	xoa28(a);
	if(a.size()==0) cout<<"EMPTY";
	else xuat(a); 
	return 0;	
} 
