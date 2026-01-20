#include<iostream>
#include<map> 
#include<vector> 

using namespace std;

int a[100000];
int d[100000];
int f[100000]; 
int main() 
{
	int n,m,k; cin>>n>>m>>k; 
	for(int i=0;i<n;i++) cin>>a[i];
	d[0]=a[0];
	for(int i=1;i<n;i++){
		d[i]=a[i]-a[i-1]; 
	} 
	map<int,vector<int> >mp;
	for(int i=1;i<=m;i++){
		int L,R,D; cin>>L>>R>>D;
		vector <int> v={L,R,D};
		mp.insert({i,v}); 
	} 
	while(k--){
		int x,y; cin>>x>>y;
		for(int i=x;i<=y;i++){
			vector<int> v=mp[i];
			int L=v[0],R=v[1],D=v[2];
			L--; R--; 
			d[L]+=D;
			d[R+1]-=D; 
		} 
	} 
	f[0]=d[0];
	for(int i=1;i<n;i++){
		f[i]=f[i-1]+d[i]; 
	} 
	for(int i=0;i<n;i++) cout<<f[i]<<" ";
	return 0; 
}
