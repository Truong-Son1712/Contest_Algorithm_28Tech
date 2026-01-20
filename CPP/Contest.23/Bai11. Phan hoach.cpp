#include<iostream>
#include<vector>
#include<string> 
using namespace std;

int n, a[100], dem, ok=1;
void ktao() 
{
	dem=1; 
	a[1]=n; 
}
void sinh() 
{
	int i=dem;
	while(i>=1&&a[i]==1){
		--i; 
	} 
	if(i==0) ok=0;
	else{
		a[i]--;
		int thieu=dem-i+1;
		dem=i;
		int q= thieu/a[i], r=thieu%a[i];
		if(q){
			for(int j=1;j<=q;j++)
				a[++dem]=a[i]; 
		} 
		if(r) a[++dem]=r; 
	} 
}
int main() 
{
	cin>>n;
	ktao();
	vector<string> v;
	while(ok){
		string s; 
		for(int i=1;i<=dem;i++){
			if(i!=dem) s+=to_string(a[i])+"+"; 
			else s+=to_string(a[i]); 
		} 
		v.push_back(s); 
		sinh(); 
	} 
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl; 
	} 
	return 0; 
}
