#include<iostream> 
#include<vector>
 
using namespace std;

void nhap(vector<int> &a,int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
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
	for(int i=0;i<hop.size();i++)
		cout<<hop[i]<<" "; 
	cout<<endl; 
	for(int i=0;i<giao.size();i++)
		cout<<giao[i]<<" ";
}
int main() 
{
	int n,m; cin>>n>>m;
	vector<int> a(n),b(m);
	nhap(a,n);
	nhap(b,m);
	hopgiao(a,b);
	return 0; 
}
