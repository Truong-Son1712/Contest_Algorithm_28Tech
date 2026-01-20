#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring> 
	
using namespace std;

int mark[10000001];
void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
vector<int> loc(int a[],int n) 
{
	sort(a,a+n); 
	memset(mark,0,sizeof(mark)); 
	vector<int> v;
	for(int i=0;i<n;i++){
		if(mark[a[i]]==0){
			v.push_back(a[i]);
			mark[a[i]]=1; 
		} 
	} 
	return v; 
}
void hopgiao(vector<int>a,vector<int>b) 
{
	int n=a.size(),m=b.size();
	vector<int> hop,giao;
	int i=0,j=0;
	while(i<n&&j<m){
		if(a[i]==b[j]){
			giao.push_back(a[i]);
			hop.push_back(a[i]);
			i++;j++; 
		} 
		else if(a[i]<b[j]){
			hop.push_back(a[i]);
			++i; 
		} 
		else{
			hop.push_back(b[j]);
			++j; 
		} 
	}
	while(i<n){
		hop.push_back(a[i]);
		++i; 
	} 
	while(j<m){
		hop.push_back(b[j]);
		++j; 
	} 
	for(int i=0;i<giao.size();i++)
		cout<<giao[i]<<" ";
	cout<<endl;
	for(int i=0;i<hop.size();i++)
		cout<<hop[i]<<" "; 
}
int main() 
{
	int n,m; cin>>n>>m;
	int a[n], b[m];
	nhap(a,n);
	nhap(b,m);
	vector<int> loca=loc(a,n);
	vector<int> locb=loc(b,m);
	hopgiao(loca,locb);
	return 0; 
}
