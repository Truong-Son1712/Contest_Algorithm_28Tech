#include<iostream>
#include<algorithm>
#include<vector> 

using namespace std;

int main() 
{
	int n,m,k; cin>>n>>m>>k;
	int a[n],b[m];
	vector<int> v; 
	for(int &x:a) cin>>x;
	for(int &x:b) cin>>x;
	int i=0,j=0;
	while(i<n&&j<m){
		if(a[i]<=b[j]){
			v.push_back(a[i]);
			i++; 
		}else{
			v.push_back(b[j]);
			j++; 
		} 
	}
	while(i<n){
		v.push_back(a[i]);
		i++; 
	}
	while(j<m){
		v.push_back(b[j]);
		j++; 
	} 
	cout<<v[k-1];
	return 0; 
}
