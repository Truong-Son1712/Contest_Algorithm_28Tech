#include<iostream>
#include<cstring>
#include<string>
#include<vector> 
#include<algorithm>
 
using namespace std;

vector<int> v; 
vector<string> kq; 
int n,k, x[100], used[100],ok=0; 

bool check(int d) 
{
	for(int i=2;i<=sqrt(d);i++){
		if(d%i==0) return false; 
	} 
	return d>1; 
}
void ktao() 
{
	v.push_back(1); 
	for(int i=2;i<=500;i++){
		if(check(i))v.push_back(i); 
	} 
}
void in() 
{
	 string s="";
	 for(int i=1;i<=k;i++){
	 	s+=to_string(x[i])+" + "; 
	 } 
	 s.erase(s.size()-3);
	 kq.push_back(s); 
}
void Try(int i,int batdau,int sum) 
{
	for(int j=batdau;j<=95;j++){
		if(used[j]==0){
			if(sum+v[j]<=n){
				x[i]=v[j];
				used[j]=1;
				if(sum+v[j]==n&&i==k){
					ok=1; 
					in(); 
				}
				else{
					Try(i+1,j+1,sum+v[j]); 
				} 
				used[j]=0; 
			}
		} 
	} 
}
int main() 
{
	cin>>n>>k;
	x[0]=0;
	ktao(); 
	memset(used,0,sizeof(used));
	Try(1,1,0);
	if(ok){
		for(auto x: kq){
			cout<<x<<endl; 
		} 
	} 
	else cout<<"NOT FOUND"; 
	return 0; 
}
