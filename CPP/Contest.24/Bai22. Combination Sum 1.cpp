#include<iostream>
#include<cstring>
#include<string>
#include<vector> 
#include<algorithm>
 
using namespace std;

vector<string> kq; 
int n,k, x[100], used[100],ok=0; 
void in() 
{
	 string s="";
	 for(int i=1;i<=k;i++){
	 	s+=to_string(x[i])+" + "; 
	 } 
	 s.erase(s.size()-3);
	 kq.push_back(s); 
}
void Try(int i,int sum) 
{
	for(int j=x[i-1]+1;j<=9;j++){
		if(used[j]==0){
			if(sum+j<=n){
				x[i]=j;
				used[j]=1;
				if(sum+j==n&&i==k){
					ok=1; 
					in(); 
				}
				else{
					Try(i+1,sum+j); 
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
	memset(used,0,sizeof(used));
	Try(1,0);
	sort(kq.begin(),kq.end());
	if(ok){
		for(auto x: kq){
			cout<<x<<endl; 
		} 
	} 
	else cout<<"NOT FOUND"; 
	return 0; 
}
