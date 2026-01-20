#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<vector<int> > &v, int n, int m)
{
	v.resize(n) ;
	for(int i=0;i<n;i++){
		v[i].resize(m) ;
		for(int j=0;j<m;j++)
			cin>>v[i][j];
		}
 } 
void xuat(vector<vector<int> > v,int n,int m)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
}
void latnguoc(vector<vector<int> > &v,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m/2;j++)
			swap(v[i][j],v[i][m-j-1]); 
	 } 
 } 
 int main()
 {
 	int n, m; cin>>n>>m;
	vector<vector<int> > v;
	nhap(v,n,m);
	latnguoc(v,n,m);
	xuat(v,n,m);
	return 0; 
  } 
