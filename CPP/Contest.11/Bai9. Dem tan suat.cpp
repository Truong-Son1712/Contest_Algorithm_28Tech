#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int dem[10000007];
void nhap(vector<int>&a, int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
void demtansuat(vector<int>a,int n) 
{
	for(int i=0;i<n;i++)
		dem[a[i]]++;
	for(int i=0;i<n;i++){
		if(dem[a[i]]!=0){
			cout<<a[i]<<" "<<dem[a[i]]<<endl;
			dem[a[i]]=0; 
		} 
	} 
}
int main() 
{
	int n; cin>>n;
	vector<int> a(n);
	nhap(a,n);
	vector<int> temp=a;
	sort(temp.begin(),temp.end());
	demtansuat(temp,temp.size()) ;
	cout<<endl;
	demtansuat(a,a.size()); 
	return 0; 
}
