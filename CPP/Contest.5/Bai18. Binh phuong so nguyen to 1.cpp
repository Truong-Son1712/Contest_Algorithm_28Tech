#include<iostream>
#include<math.h>
#include<cstring>
#include<vector> 
#include<set> 
#include<algorithm> 

using namespace std;

const int n=1e6+1;
bool nt[n];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false; 
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]==true){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		}
	} 
}
int main() 
{
	sang();
	vector<int> v;
	for(int i=2;i<=n;i++) if(nt[i]) v.push_back(i);
	//for(int i=0;i<=100;i++) cout<<v[i]<<" ";
	//cout<<endl; 
	vector<int> v2; 
	int a,b; cin>>a>>b; 
	for(int i=0;i<=v.size();i++){
		if(v[i]*v[i]>b) break; 
		for(int k=1;k*v[i]*v[i]<=b;k++) v2.push_back(k*v[i]*v[i]); 
	}  
	set<int>se; 
	sort(v2.begin(),v2.end()); 
	auto it=lower_bound(v2.begin(),v2.end(),a);
	int batdau=it-v2.begin();
	for(int i=batdau;i<v2.size();i++) se.insert(v2[i]); 
	for(auto x:se) cout<<x<<" "; 
	return 0; 
}
