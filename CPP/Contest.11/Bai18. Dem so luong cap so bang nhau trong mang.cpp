#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;

int dem[1000001];
void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
vector<pair<int,int> > tansuat(int a[],int n) 
{
	vector<pair<int,int> >luu; 
	for(int i=0;i<n;i++)
		dem[a[i]]++;
	for(int i=0;i<n;i++){
		if(dem[a[i]]!=0){
			luu.push_back(make_pair(a[i],dem[a[i]])) ;
			dem[a[i]]=0; 
		} 
	} 
	return luu; 
}
long long  demcap(vector<pair<int,int> >v) 
{
	long long cnt=0; 
	for(int i=0;i<v.size();i++){
		if(v[i].second>=2)
			cnt+=((long long)v[i].second*(v[i].second-1)/2);
	} 
	return cnt; 
}
int main() 
{
	int n; cin>>n;
	int a[n]; 
	nhap(a,n);
	vector<pair<int,int> >luu=tansuat(a,n);
	long long res=demcap(luu);
	cout<<res;
	return 0; 
}
