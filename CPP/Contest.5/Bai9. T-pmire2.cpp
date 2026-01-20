#include<iostream>
#include<cstring>
#include<math.h>
#include<vector> 
#include<algorithm> 

using namespace std;

const int n=1e6+1; 
bool nt[n]; 
void sang()
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false;
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		} 
	} 
}
int main() 
{
	vector<long long> v; 
	sang();
	for(int i=2;i<=n;i++){
		if(nt[i])v.push_back((long long)i*i); 
	} 
	long long m; cin>>m;
	auto it=lower_bound(v.begin(),v.end(),m);
	it--;
	cout<<it-v.begin()+1; 
	return 0; 
}

